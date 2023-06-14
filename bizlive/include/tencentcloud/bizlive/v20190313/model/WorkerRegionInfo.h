/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_WORKERREGIONINFO_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_WORKERREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
        {
            namespace Model
            {
                /**
                * worker的区域信息
                */
                class WorkerRegionInfo : public AbstractModel
                {
                public:
                    WorkerRegionInfo();
                    ~WorkerRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该区域空闲机器数量
                     * @return Idle 该区域空闲机器数量
                     * 
                     */
                    uint64_t GetIdle() const;

                    /**
                     * 设置该区域空闲机器数量
                     * @param _idle 该区域空闲机器数量
                     * 
                     */
                    void SetIdle(const uint64_t& _idle);

                    /**
                     * 判断参数 Idle 是否已赋值
                     * @return Idle 是否已赋值
                     * 
                     */
                    bool IdleHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param _region 区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 该区域空闲机器数量
                     */
                    uint64_t m_idle;
                    bool m_idleHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_WORKERREGIONINFO_H_
