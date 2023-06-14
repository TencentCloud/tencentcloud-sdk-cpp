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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMETENDENCYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMETENDENCYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 运行时趋势信息
                */
                class RunTimeTendencyInfo : public AbstractModel
                {
                public:
                    RunTimeTendencyInfo();
                    ~RunTimeTendencyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当天时间
                     * @return CurTime 当天时间
                     * 
                     */
                    std::string GetCurTime() const;

                    /**
                     * 设置当天时间
                     * @param _curTime 当天时间
                     * 
                     */
                    void SetCurTime(const std::string& _curTime);

                    /**
                     * 判断参数 CurTime 是否已赋值
                     * @return CurTime 是否已赋值
                     * 
                     */
                    bool CurTimeHasBeenSet() const;

                    /**
                     * 获取当前数量
                     * @return Cnt 当前数量
                     * 
                     */
                    uint64_t GetCnt() const;

                    /**
                     * 设置当前数量
                     * @param _cnt 当前数量
                     * 
                     */
                    void SetCnt(const uint64_t& _cnt);

                    /**
                     * 判断参数 Cnt 是否已赋值
                     * @return Cnt 是否已赋值
                     * 
                     */
                    bool CntHasBeenSet() const;

                private:

                    /**
                     * 当天时间
                     */
                    std::string m_curTime;
                    bool m_curTimeHasBeenSet;

                    /**
                     * 当前数量
                     */
                    uint64_t m_cnt;
                    bool m_cntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RUNTIMETENDENCYINFO_H_
