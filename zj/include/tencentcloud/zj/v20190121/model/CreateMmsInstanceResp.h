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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_CREATEMMSINSTANCERESP_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_CREATEMMSINSTANCERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 创建超级短信样例返回结果
                */
                class CreateMmsInstanceResp : public AbstractModel
                {
                public:
                    CreateMmsInstanceResp();
                    ~CreateMmsInstanceResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回码：0-成功 其它-失败
                     * @return ReturnCode 返回码：0-成功 其它-失败
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 设置返回码：0-成功 其它-失败
                     * @param ReturnCode 返回码：0-成功 其它-失败
                     */
                    void SetReturnCode(const int64_t& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取返回信息
                     * @return ReturnMsg 返回信息
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 设置返回信息
                     * @param ReturnMsg 返回信息
                     */
                    void SetReturnMsg(const std::string& _returnMsg);

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     */
                    bool ReturnMsgHasBeenSet() const;

                    /**
                     * 获取样例id
                     * @return InstanceId 样例id
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置样例id
                     * @param InstanceId 样例id
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 返回码：0-成功 其它-失败
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 返回信息
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                    /**
                     * 样例id
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_CREATEMMSINSTANCERESP_H_
