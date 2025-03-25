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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERLOGPERSONALRESP_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERLOGPERSONALRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TriggerLogResp.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 查询应用更新触发器触发日志返回值
                */
                class DescribeApplicationTriggerLogPersonalResp : public AbstractModel
                {
                public:
                    DescribeApplicationTriggerLogPersonalResp();
                    ~DescribeApplicationTriggerLogPersonalResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回总数
                     * @return TotalCount 返回总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置返回总数
                     * @param _totalCount 返回总数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取触发日志列表
                     * @return LogInfo 触发日志列表
                     * 
                     */
                    std::vector<TriggerLogResp> GetLogInfo() const;

                    /**
                     * 设置触发日志列表
                     * @param _logInfo 触发日志列表
                     * 
                     */
                    void SetLogInfo(const std::vector<TriggerLogResp>& _logInfo);

                    /**
                     * 判断参数 LogInfo 是否已赋值
                     * @return LogInfo 是否已赋值
                     * 
                     */
                    bool LogInfoHasBeenSet() const;

                private:

                    /**
                     * 返回总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 触发日志列表
                     */
                    std::vector<TriggerLogResp> m_logInfo;
                    bool m_logInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEAPPLICATIONTRIGGERLOGPERSONALRESP_H_
