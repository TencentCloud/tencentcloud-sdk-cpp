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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBPROTECTIONLOGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBPROTECTIONLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/CCLogData.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeWebProtectionLog返回参数结构体
                */
                class DescribeWebProtectionLogResponse : public AbstractModel
                {
                public:
                    DescribeWebProtectionLogResponse();
                    ~DescribeWebProtectionLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取限速拦截Data
                     * @return Data 限速拦截Data
                     */
                    CCLogData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取状态，1：失败，0:成功
                     * @return Status 状态，1：失败，0:成功
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取返回信息
                     * @return Msg 返回信息
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 限速拦截Data
                     */
                    CCLogData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 状态，1：失败，0:成功
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 返回信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEWEBPROTECTIONLOGRESPONSE_H_
