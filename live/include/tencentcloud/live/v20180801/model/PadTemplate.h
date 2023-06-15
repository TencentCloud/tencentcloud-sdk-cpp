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
                     * 获取模板id。
                     * @return TemplateId 模板id。
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置模板id。
                     * @param _templateId 模板id。
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
                     * 获取模板名称。
                     * @return TemplateName 模板名称。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param _templateName 模板名称。
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
                     * 获取垫片内容。
                     * @return Url 垫片内容。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置垫片内容。
                     * @param _url 垫片内容。
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
                     * 获取模板创建时间。
                     * @return CreateTime 模板创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间。
                     * @param _createTime 模板创建时间。
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
                     * 获取模板修改时间。
                     * @return UpdateTime 模板修改时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板修改时间。
                     * @param _updateTime 模板修改时间。
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
                     * 获取模板描述。
                     * @return Description 模板描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述。
                     * @param _description 模板描述。
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
                     * 获取断流等待时间。
取值范围：0-30000。
单位：ms。
                     * @return WaitDuration 断流等待时间。
取值范围：0-30000。
单位：ms。
                     * 
                     */
                    uint64_t GetWaitDuration() const;

                    /**
                     * 设置断流等待时间。
取值范围：0-30000。
单位：ms。
                     * @param _waitDuration 断流等待时间。
取值范围：0-30000。
单位：ms。
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
                     * 获取最大垫片时长。
取值范围：0 - 正无穷。
单位：ms。
                     * @return MaxDuration 最大垫片时长。
取值范围：0 - 正无穷。
单位：ms。
                     * 
                     */
                    uint64_t GetMaxDuration() const;

                    /**
                     * 设置最大垫片时长。
取值范围：0 - 正无穷。
单位：ms。
                     * @param _maxDuration 最大垫片时长。
取值范围：0 - 正无穷。
单位：ms。
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
                     * 获取垫片内容类型： 1：图片，2：视频。 默认值：1。
                     * @return Type 垫片内容类型： 1：图片，2：视频。 默认值：1。
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置垫片内容类型： 1：图片，2：视频。 默认值：1。
                     * @param _type 垫片内容类型： 1：图片，2：视频。 默认值：1。
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 模板id。
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 垫片内容。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 模板创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板修改时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 模板描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 断流等待时间。
取值范围：0-30000。
单位：ms。
                     */
                    uint64_t m_waitDuration;
                    bool m_waitDurationHasBeenSet;

                    /**
                     * 最大垫片时长。
取值范围：0 - 正无穷。
单位：ms。
                     */
                    uint64_t m_maxDuration;
                    bool m_maxDurationHasBeenSet;

                    /**
                     * 垫片内容类型： 1：图片，2：视频。 默认值：1。
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PADTEMPLATE_H_
