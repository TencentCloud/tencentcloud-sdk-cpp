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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyAssetTag请求参数结构体
                */
                class ModifyAssetTagRequest : public AbstractModel
                {
                public:
                    ModifyAssetTagRequest();
                    ~ModifyAssetTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标签键</p>
                     * @return Key <p>标签键</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>标签键</p>
                     * @param _key <p>标签键</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>标签值</p>
                     * @return Value <p>标签值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>标签值</p>
                     * @param _value <p>标签值</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>标签ID</p>
                     * @return TagID <p>标签ID</p>
                     * 
                     */
                    uint64_t GetTagID() const;

                    /**
                     * 设置<p>标签ID</p>
                     * @param _tagID <p>标签ID</p>
                     * 
                     */
                    void SetTagID(const uint64_t& _tagID);

                    /**
                     * 判断参数 TagID 是否已赋值
                     * @return TagID 是否已赋值
                     * 
                     */
                    bool TagIDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>颜色</p>
                     * @return Color <p>颜色</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>颜色</p>
                     * @param _color <p>颜色</p>
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>打标策略</p>
                     * @return TaggingRule <p>打标策略</p>
                     * 
                     */
                    std::string GetTaggingRule() const;

                    /**
                     * 设置<p>打标策略</p>
                     * @param _taggingRule <p>打标策略</p>
                     * 
                     */
                    void SetTaggingRule(const std::string& _taggingRule);

                    /**
                     * 判断参数 TaggingRule 是否已赋值
                     * @return TaggingRule 是否已赋值
                     * 
                     */
                    bool TaggingRuleHasBeenSet() const;

                    /**
                     * 获取<p>是否立即执行资产打标</p>
                     * @return ApplyNow <p>是否立即执行资产打标</p>
                     * 
                     */
                    bool GetApplyNow() const;

                    /**
                     * 设置<p>是否立即执行资产打标</p>
                     * @param _applyNow <p>是否立即执行资产打标</p>
                     * 
                     */
                    void SetApplyNow(const bool& _applyNow);

                    /**
                     * 判断参数 ApplyNow 是否已赋值
                     * @return ApplyNow 是否已赋值
                     * 
                     */
                    bool ApplyNowHasBeenSet() const;

                private:

                    /**
                     * <p>标签键</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>标签值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>标签ID</p>
                     */
                    uint64_t m_tagID;
                    bool m_tagIDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>颜色</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>打标策略</p>
                     */
                    std::string m_taggingRule;
                    bool m_taggingRuleHasBeenSet;

                    /**
                     * <p>是否立即执行资产打标</p>
                     */
                    bool m_applyNow;
                    bool m_applyNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYASSETTAGREQUEST_H_
