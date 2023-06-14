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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSREGIONSTATUS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSREGIONSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 跨地域备份的目标地域和备份状态
                */
                class CrossRegionStatus : public AbstractModel
                {
                public:
                    CrossRegionStatus();
                    ~CrossRegionStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取跨地域备份目标地域
                     * @return CrossRegion 跨地域备份目标地域
                     * 
                     */
                    std::string GetCrossRegion() const;

                    /**
                     * 设置跨地域备份目标地域
                     * @param _crossRegion 跨地域备份目标地域
                     * 
                     */
                    void SetCrossRegion(const std::string& _crossRegion);

                    /**
                     * 判断参数 CrossRegion 是否已赋值
                     * @return CrossRegion 是否已赋值
                     * 
                     */
                    bool CrossRegionHasBeenSet() const;

                    /**
                     * 获取备份跨地域的同步状态 0-创建中；1-成功；2-失败；4-同步中
                     * @return CrossStatus 备份跨地域的同步状态 0-创建中；1-成功；2-失败；4-同步中
                     * 
                     */
                    int64_t GetCrossStatus() const;

                    /**
                     * 设置备份跨地域的同步状态 0-创建中；1-成功；2-失败；4-同步中
                     * @param _crossStatus 备份跨地域的同步状态 0-创建中；1-成功；2-失败；4-同步中
                     * 
                     */
                    void SetCrossStatus(const int64_t& _crossStatus);

                    /**
                     * 判断参数 CrossStatus 是否已赋值
                     * @return CrossStatus 是否已赋值
                     * 
                     */
                    bool CrossStatusHasBeenSet() const;

                private:

                    /**
                     * 跨地域备份目标地域
                     */
                    std::string m_crossRegion;
                    bool m_crossRegionHasBeenSet;

                    /**
                     * 备份跨地域的同步状态 0-创建中；1-成功；2-失败；4-同步中
                     */
                    int64_t m_crossStatus;
                    bool m_crossStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSREGIONSTATUS_H_
