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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTEMPORARYCREDENTIALSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTEMPORARYCREDENTIALSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeOfflineExportTemporaryCredentials返回参数结构体
                */
                class DescribeOfflineExportTemporaryCredentialsResponse : public AbstractModel
                {
                public:
                    DescribeOfflineExportTemporaryCredentialsResponse();
                    ~DescribeOfflineExportTemporaryCredentialsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回状态码 0 成功 非0不成功</p>
                     * @return ReturnCode <p>返回状态码 0 成功 非0不成功</p>
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
                     * 获取<p>返回信息  success 成功 其他 不成功</p>
                     * @return ReturnMsg <p>返回信息  success 成功 其他 不成功</p>
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取<p>临时下载链接</p>
                     * @return Link <p>临时下载链接</p>
                     * 
                     */
                    std::string GetLink() const;

                    /**
                     * 判断参数 Link 是否已赋值
                     * @return Link 是否已赋值
                     * 
                     */
                    bool LinkHasBeenSet() const;

                private:

                    /**
                     * <p>返回状态码 0 成功 非0不成功</p>
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>返回信息  success 成功 其他 不成功</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * <p>临时下载链接</p>
                     */
                    std::string m_link;
                    bool m_linkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOFFLINEEXPORTTEMPORARYCREDENTIALSRESPONSE_H_
