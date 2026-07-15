/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEAUTOSCALEDISKINFORESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEAUTOSCALEDISKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/AutoScaleDiskInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeAutoScaleDiskInfo返回参数结构体
                */
                class DescribeAutoScaleDiskInfoResponse : public AbstractModel
                {
                public:
                    DescribeAutoScaleDiskInfoResponse();
                    ~DescribeAutoScaleDiskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自动扩盘参数列表
                     * @return AutoScaleDiskInfoList 自动扩盘参数列表
                     * 
                     */
                    std::vector<AutoScaleDiskInfo> GetAutoScaleDiskInfoList() const;

                    /**
                     * 判断参数 AutoScaleDiskInfoList 是否已赋值
                     * @return AutoScaleDiskInfoList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskInfoListHasBeenSet() const;

                    /**
                     * 获取0 修改中; 1 正常
                     * @return Status 0 修改中; 1 正常
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 自动扩盘参数列表
                     */
                    std::vector<AutoScaleDiskInfo> m_autoScaleDiskInfoList;
                    bool m_autoScaleDiskInfoListHasBeenSet;

                    /**
                     * 0 修改中; 1 正常
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEAUTOSCALEDISKINFORESPONSE_H_
