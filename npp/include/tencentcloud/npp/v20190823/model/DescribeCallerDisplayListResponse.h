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

#ifndef TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLERDISPLAYLISTRESPONSE_H_
#define TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLERDISPLAYLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/npp/v20190823/model/CallBackPhoneCode.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeCallerDisplayList返回参数结构体
                */
                class DescribeCallerDisplayListResponse : public AbstractModel
                {
                public:
                    DescribeCallerDisplayListResponse();
                    ~DescribeCallerDisplayListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主叫显号号码集合，codeList[0...*] 结构体数组，如果业务是主被叫互显，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeList 主叫显号号码集合，codeList[0...*] 结构体数组，如果业务是主被叫互显，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CallBackPhoneCode> GetCodeList() const;

                    /**
                     * 判断参数 CodeList 是否已赋值
                     * @return CodeList 是否已赋值
                     * 
                     */
                    bool CodeListHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return ErrorCode 错误码
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主叫显号号码集合，codeList[0...*] 结构体数组，如果业务是主被叫互显，该字段为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CallBackPhoneCode> m_codeList;
                    bool m_codeListHasBeenSet;

                    /**
                     * 错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_MODEL_DESCRIBECALLERDISPLAYLISTRESPONSE_H_
