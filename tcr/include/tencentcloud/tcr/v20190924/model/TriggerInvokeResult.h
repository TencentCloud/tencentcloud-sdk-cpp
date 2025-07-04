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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKERESULT_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 触发器触发结果
                */
                class TriggerInvokeResult : public AbstractModel
                {
                public:
                    TriggerInvokeResult();
                    ~TriggerInvokeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求TKE返回值
                     * @return ReturnCode 请求TKE返回值
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 设置请求TKE返回值
                     * @param _returnCode 请求TKE返回值
                     * 
                     */
                    void SetReturnCode(const int64_t& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取请求TKE返回信息
                     * @return ReturnMsg 请求TKE返回信息
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 设置请求TKE返回信息
                     * @param _returnMsg 请求TKE返回信息
                     * 
                     */
                    void SetReturnMsg(const std::string& _returnMsg);

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * 请求TKE返回值
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 请求TKE返回信息
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_TRIGGERINVOKERESULT_H_
