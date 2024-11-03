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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEUNHANDLEEVENTTABLISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEUNHANDLEEVENTTABLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/UnHandleEvent.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeUnHandleEventTabList返回参数结构体
                */
                class DescribeUnHandleEventTabListResponse : public AbstractModel
                {
                public:
                    DescribeUnHandleEventTabListResponse();
                    ~DescribeUnHandleEventTabListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取租户伪攻击链未处置事件
                     * @return Data 租户伪攻击链未处置事件
                     * 
                     */
                    UnHandleEvent GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取错误码，0成功 非0错误
                     * @return ReturnCode 错误码，0成功 非0错误
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取返回信息 success成功
                     * @return ReturnMsg 返回信息 success成功
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * 租户伪攻击链未处置事件
                     */
                    UnHandleEvent m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 错误码，0成功 非0错误
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 返回信息 success成功
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEUNHANDLEEVENTTABLISTRESPONSE_H_
