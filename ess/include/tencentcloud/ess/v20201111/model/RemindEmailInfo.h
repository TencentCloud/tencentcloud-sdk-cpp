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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REMINDEMAILINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REMINDEMAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 催办邮件结构体
                */
                class RemindEmailInfo : public AbstractModel
                {
                public:
                    RemindEmailInfo();
                    ~RemindEmailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>签署编号</p>
                     * @return SignId <p>签署编号</p>
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置<p>签署编号</p>
                     * @param _signId <p>签署编号</p>
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取<p>指定邮箱地址，催办时使用此邮箱替代 DB 中存储的邮箱</p>
                     * @return ApproverEmail <p>指定邮箱地址，催办时使用此邮箱替代 DB 中存储的邮箱</p>
                     * 
                     */
                    std::string GetApproverEmail() const;

                    /**
                     * 设置<p>指定邮箱地址，催办时使用此邮箱替代 DB 中存储的邮箱</p>
                     * @param _approverEmail <p>指定邮箱地址，催办时使用此邮箱替代 DB 中存储的邮箱</p>
                     * 
                     */
                    void SetApproverEmail(const std::string& _approverEmail);

                    /**
                     * 判断参数 ApproverEmail 是否已赋值
                     * @return ApproverEmail 是否已赋值
                     * 
                     */
                    bool ApproverEmailHasBeenSet() const;

                private:

                    /**
                     * <p>签署编号</p>
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * <p>指定邮箱地址，催办时使用此邮箱替代 DB 中存储的邮箱</p>
                     */
                    std::string m_approverEmail;
                    bool m_approverEmailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REMINDEMAILINFO_H_
