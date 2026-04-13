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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PADTEMPLATE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PADTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播垫片模板。
                */
                class PadTemplate : public AbstractModel
                {
                public:
                    PadTemplate();
                    ~PadTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板id。</p>
                     * @return TemplateId <p>模板id。</p>
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置<p>模板id。</p>
                     * @param _templateId <p>模板id。</p>
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>模板名称。</p>
                     * @return TemplateName <p>模板名称。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称。</p>
                     * @param _templateName <p>模板名称。</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>垫片内容。</p>
                     * @return Url <p>垫片内容。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>垫片内容。</p>
                     * @param _url <p>垫片内容。</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>模板创建时间。</p>
                     * @return CreateTime <p>模板创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>模板创建时间。</p>
                     * @param _createTime <p>模板创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板修改时间。</p>
                     * @return UpdateTime <p>模板修改时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>模板修改时间。</p>
                     * @param _updateTime <p>模板修改时间。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板描述。</p>
                     * @return Description <p>模板描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模板描述。</p>
                     * @param _description <p>模板描述。</p>
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
                     * 获取<p>断流等待时间。<br>取值范围：0-30000。<br>单位：ms。</p>
                     * @return WaitDuration <p>断流等待时间。<br>取值范围：0-30000。<br>单位：ms。</p>
                     * 
                     */
                    uint64_t GetWaitDuration() const;

                    /**
                     * 设置<p>断流等待时间。<br>取值范围：0-30000。<br>单位：ms。</p>
                     * @param _waitDuration <p>断流等待时间。<br>取值范围：0-30000。<br>单位：ms。</p>
                     * 
                     */
                    void SetWaitDuration(const uint64_t& _waitDuration);

                    /**
                     * 判断参数 WaitDuration 是否已赋值
                     * @return WaitDuration 是否已赋值
                     * 
                     */
                    bool WaitDurationHasBeenSet() const;

                    /**
                     * 获取<p>最大垫片时长。<br>取值范围：0 - 正无穷。<br>单位：ms。</p>
                     * @return MaxDuration <p>最大垫片时长。<br>取值范围：0 - 正无穷。<br>单位：ms。</p>
                     * 
                     */
                    uint64_t GetMaxDuration() const;

                    /**
                     * 设置<p>最大垫片时长。<br>取值范围：0 - 正无穷。<br>单位：ms。</p>
                     * @param _maxDuration <p>最大垫片时长。<br>取值范围：0 - 正无穷。<br>单位：ms。</p>
                     * 
                     */
                    void SetMaxDuration(const uint64_t& _maxDuration);

                    /**
                     * 判断参数 MaxDuration 是否已赋值
                     * @return MaxDuration 是否已赋值
                     * 
                     */
                    bool MaxDurationHasBeenSet() const;

                    /**
                     * 获取<p>垫片内容类型： 1：图片，2：视频。 默认值：1。</p>
                     * @return Type <p>垫片内容类型： 1：图片，2：视频。 默认值：1。</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>垫片内容类型： 1：图片，2：视频。 默认值：1。</p>
                     * @param _type <p>垫片内容类型： 1：图片，2：视频。 默认值：1。</p>
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>断流垫片触发条件</p><p>枚举值：</p><ul><li>0： 主动及异常断流</li><li>1： 异常断流</li></ul><p>默认值：0</p>
                     * @return TriggerCondition <p>断流垫片触发条件</p><p>枚举值：</p><ul><li>0： 主动及异常断流</li><li>1： 异常断流</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetTriggerCondition() const;

                    /**
                     * 设置<p>断流垫片触发条件</p><p>枚举值：</p><ul><li>0： 主动及异常断流</li><li>1： 异常断流</li></ul><p>默认值：0</p>
                     * @param _triggerCondition <p>断流垫片触发条件</p><p>枚举值：</p><ul><li>0： 主动及异常断流</li><li>1： 异常断流</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetTriggerCondition(const uint64_t& _triggerCondition);

                    /**
                     * 判断参数 TriggerCondition 是否已赋值
                     * @return TriggerCondition 是否已赋值
                     * 
                     */
                    bool TriggerConditionHasBeenSet() const;

                private:

                    /**
                     * <p>模板id。</p>
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板名称。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>垫片内容。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>模板创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>模板修改时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>模板描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>断流等待时间。<br>取值范围：0-30000。<br>单位：ms。</p>
                     */
                    uint64_t m_waitDuration;
                    bool m_waitDurationHasBeenSet;

                    /**
                     * <p>最大垫片时长。<br>取值范围：0 - 正无穷。<br>单位：ms。</p>
                     */
                    uint64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * <p>垫片内容类型： 1：图片，2：视频。 默认值：1。</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>断流垫片触发条件</p><p>枚举值：</p><ul><li>0： 主动及异常断流</li><li>1： 异常断流</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_triggerCondition;
                    bool m_triggerConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PADTEMPLATE_H_
