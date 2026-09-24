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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_PROFILEFIELDITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_PROFILEFIELDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/OptionsItem.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 登记信息数据
                */
                class ProfileFieldItem : public AbstractModel
                {
                public:
                    ProfileFieldItem();
                    ~ProfileFieldItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>键值id</p>
                     * @return Id <p>键值id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>键值id</p>
                     * @param _id <p>键值id</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>排序key(只支持32位)</p>
                     * @return Key <p>排序key(只支持32位)</p>
                     * 
                     */
                    int64_t GetKey() const;

                    /**
                     * 设置<p>排序key(只支持32位)</p>
                     * @param _key <p>排序key(只支持32位)</p>
                     * 
                     */
                    void SetKey(const int64_t& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Title <p>名称</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _title <p>名称</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>输入类型(只支持32位)</p>
                     * @return Type <p>输入类型(只支持32位)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>输入类型(只支持32位)</p>
                     * @param _type <p>输入类型(只支持32位)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>是否必选(只支持32位)</p>
                     * @return IsMust <p>是否必选(只支持32位)</p>
                     * 
                     */
                    int64_t GetIsMust() const;

                    /**
                     * 设置<p>是否必选(只支持32位)</p>
                     * @param _isMust <p>是否必选(只支持32位)</p>
                     * 
                     */
                    void SetIsMust(const int64_t& _isMust);

                    /**
                     * 判断参数 IsMust 是否已赋值
                     * @return IsMust 是否已赋值
                     * 
                     */
                    bool IsMustHasBeenSet() const;

                    /**
                     * 获取<p>是否显示(只支持32位)</p>
                     * @return IsShow <p>是否显示(只支持32位)</p>
                     * 
                     */
                    int64_t GetIsShow() const;

                    /**
                     * 设置<p>是否显示(只支持32位)</p>
                     * @param _isShow <p>是否显示(只支持32位)</p>
                     * 
                     */
                    void SetIsShow(const int64_t& _isShow);

                    /**
                     * 判断参数 IsShow 是否已赋值
                     * @return IsShow 是否已赋值
                     * 
                     */
                    bool IsShowHasBeenSet() const;

                    /**
                     * 获取<p>是否自定义(只支持32位)</p>
                     * @return IsCustom <p>是否自定义(只支持32位)</p>
                     * 
                     */
                    int64_t GetIsCustom() const;

                    /**
                     * 设置<p>是否自定义(只支持32位)</p>
                     * @param _isCustom <p>是否自定义(只支持32位)</p>
                     * 
                     */
                    void SetIsCustom(const int64_t& _isCustom);

                    /**
                     * 判断参数 IsCustom 是否已赋值
                     * @return IsCustom 是否已赋值
                     * 
                     */
                    bool IsCustomHasBeenSet() const;

                    /**
                     * 获取<p>下一个选项key(只支持32位)</p>
                     * @return NextOptionKey <p>下一个选项key(只支持32位)</p>
                     * 
                     */
                    int64_t GetNextOptionKey() const;

                    /**
                     * 设置<p>下一个选项key(只支持32位)</p>
                     * @param _nextOptionKey <p>下一个选项key(只支持32位)</p>
                     * 
                     */
                    void SetNextOptionKey(const int64_t& _nextOptionKey);

                    /**
                     * 判断参数 NextOptionKey 是否已赋值
                     * @return NextOptionKey 是否已赋值
                     * 
                     */
                    bool NextOptionKeyHasBeenSet() const;

                    /**
                     * 获取<p>选项数据</p>
                     * @return Options <p>选项数据</p>
                     * 
                     */
                    std::string GetOptions() const;

                    /**
                     * 设置<p>选项数据</p>
                     * @param _options <p>选项数据</p>
                     * 
                     */
                    void SetOptions(const std::string& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     * 
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取<p>是否覆盖(只支持32位)</p>
                     * @return IsReplace <p>是否覆盖(只支持32位)</p>
                     * 
                     */
                    int64_t GetIsReplace() const;

                    /**
                     * 设置<p>是否覆盖(只支持32位)</p>
                     * @param _isReplace <p>是否覆盖(只支持32位)</p>
                     * 
                     */
                    void SetIsReplace(const int64_t& _isReplace);

                    /**
                     * 判断参数 IsReplace 是否已赋值
                     * @return IsReplace 是否已赋值
                     * 
                     */
                    bool IsReplaceHasBeenSet() const;

                    /**
                     * 获取<p>是否可以修改分组</p>
                     * @return GroupEditable <p>是否可以修改分组</p>
                     * 
                     */
                    bool GetGroupEditable() const;

                    /**
                     * 设置<p>是否可以修改分组</p>
                     * @param _groupEditable <p>是否可以修改分组</p>
                     * 
                     */
                    void SetGroupEditable(const bool& _groupEditable);

                    /**
                     * 判断参数 GroupEditable 是否已赋值
                     * @return GroupEditable 是否已赋值
                     * 
                     */
                    bool GroupEditableHasBeenSet() const;

                    /**
                     * 获取<p>是否有规则</p>
                     * @return HasRules <p>是否有规则</p>
                     * 
                     */
                    bool GetHasRules() const;

                    /**
                     * 设置<p>是否有规则</p>
                     * @param _hasRules <p>是否有规则</p>
                     * 
                     */
                    void SetHasRules(const bool& _hasRules);

                    /**
                     * 判断参数 HasRules 是否已赋值
                     * @return HasRules 是否已赋值
                     * 
                     */
                    bool HasRulesHasBeenSet() const;

                    /**
                     * 获取<p>规则id</p>
                     * @return RuleId <p>规则id</p>
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置<p>规则id</p>
                     * @param _ruleId <p>规则id</p>
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>名称-英文</p>
                     * @return TitleEn <p>名称-英文</p>
                     * 
                     */
                    std::string GetTitleEn() const;

                    /**
                     * 设置<p>名称-英文</p>
                     * @param _titleEn <p>名称-英文</p>
                     * 
                     */
                    void SetTitleEn(const std::string& _titleEn);

                    /**
                     * 判断参数 TitleEn 是否已赋值
                     * @return TitleEn 是否已赋值
                     * 
                     */
                    bool TitleEnHasBeenSet() const;

                    /**
                     * 获取<p>选项数据-英文</p>
                     * @return OptionsEn <p>选项数据-英文</p>
                     * 
                     */
                    std::string GetOptionsEn() const;

                    /**
                     * 设置<p>选项数据-英文</p>
                     * @param _optionsEn <p>选项数据-英文</p>
                     * 
                     */
                    void SetOptionsEn(const std::string& _optionsEn);

                    /**
                     * 判断参数 OptionsEn 是否已赋值
                     * @return OptionsEn 是否已赋值
                     * 
                     */
                    bool OptionsEnHasBeenSet() const;

                    /**
                     * 获取<p>选项数据(包含中英文)</p>
                     * @return OptionsItem <p>选项数据(包含中英文)</p>
                     * 
                     */
                    std::vector<OptionsItem> GetOptionsItem() const;

                    /**
                     * 设置<p>选项数据(包含中英文)</p>
                     * @param _optionsItem <p>选项数据(包含中英文)</p>
                     * 
                     */
                    void SetOptionsItem(const std::vector<OptionsItem>& _optionsItem);

                    /**
                     * 判断参数 OptionsItem 是否已赋值
                     * @return OptionsItem 是否已赋值
                     * 
                     */
                    bool OptionsItemHasBeenSet() const;

                private:

                    /**
                     * <p>键值id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>排序key(只支持32位)</p>
                     */
                    int64_t m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>输入类型(只支持32位)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否必选(只支持32位)</p>
                     */
                    int64_t m_isMust;
                    bool m_isMustHasBeenSet;

                    /**
                     * <p>是否显示(只支持32位)</p>
                     */
                    int64_t m_isShow;
                    bool m_isShowHasBeenSet;

                    /**
                     * <p>是否自定义(只支持32位)</p>
                     */
                    int64_t m_isCustom;
                    bool m_isCustomHasBeenSet;

                    /**
                     * <p>下一个选项key(只支持32位)</p>
                     */
                    int64_t m_nextOptionKey;
                    bool m_nextOptionKeyHasBeenSet;

                    /**
                     * <p>选项数据</p>
                     */
                    std::string m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * <p>是否覆盖(只支持32位)</p>
                     */
                    int64_t m_isReplace;
                    bool m_isReplaceHasBeenSet;

                    /**
                     * <p>是否可以修改分组</p>
                     */
                    bool m_groupEditable;
                    bool m_groupEditableHasBeenSet;

                    /**
                     * <p>是否有规则</p>
                     */
                    bool m_hasRules;
                    bool m_hasRulesHasBeenSet;

                    /**
                     * <p>规则id</p>
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>名称-英文</p>
                     */
                    std::string m_titleEn;
                    bool m_titleEnHasBeenSet;

                    /**
                     * <p>选项数据-英文</p>
                     */
                    std::string m_optionsEn;
                    bool m_optionsEnHasBeenSet;

                    /**
                     * <p>选项数据(包含中英文)</p>
                     */
                    std::vector<OptionsItem> m_optionsItem;
                    bool m_optionsItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_PROFILEFIELDITEM_H_
