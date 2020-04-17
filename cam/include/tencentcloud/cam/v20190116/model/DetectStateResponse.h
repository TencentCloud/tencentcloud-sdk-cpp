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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DETECTSTATERESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DETECTSTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DetectState返回参数结构体
                */
                class DetectStateResponse : public AbstractModel
                {
                public:
                    DetectStateResponse();
                    ~DetectStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取名字
                     * @return Name 名字
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取身份证号码
                     * @return Idcard 身份证号码
                     */
                    std::string GetIdcard() const;

                    /**
                     * 判断参数 Idcard 是否已赋值
                     * @return Idcard 是否已赋值
                     */
                    bool IdcardHasBeenSet() const;

                    /**
                     * 获取业务token
                     * @return BizToken 业务token
                     */
                    std::string GetBizToken() const;

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     */
                    bool BizTokenHasBeenSet() const;

                    /**
                     * 获取ulr地址
                     * @return Url ulr地址
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取规则id
                     * @return RuleId 规则id
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 身份证号码
                     */
                    std::string m_idcard;
                    bool m_idcardHasBeenSet;

                    /**
                     * 业务token
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                    /**
                     * ulr地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 规则id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DETECTSTATERESPONSE_H_
