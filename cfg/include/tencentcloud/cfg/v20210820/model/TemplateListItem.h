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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATELISTITEM_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 经验库列表信息
                */
                class TemplateListItem : public AbstractModel
                {
                public:
                    TemplateListItem();
                    ~TemplateListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取经验库ID
                     * @return TemplateId 经验库ID
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置经验库ID
                     * @param _templateId 经验库ID
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取经验库标题
                     * @return TemplateTitle 经验库标题
                     * 
                     */
                    std::string GetTemplateTitle() const;

                    /**
                     * 设置经验库标题
                     * @param _templateTitle 经验库标题
                     * 
                     */
                    void SetTemplateTitle(const std::string& _templateTitle);

                    /**
                     * 判断参数 TemplateTitle 是否已赋值
                     * @return TemplateTitle 是否已赋值
                     * 
                     */
                    bool TemplateTitleHasBeenSet() const;

                    /**
                     * 获取经验库描述
                     * @return TemplateDescription 经验库描述
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 设置经验库描述
                     * @param _templateDescription 经验库描述
                     * 
                     */
                    void SetTemplateDescription(const std::string& _templateDescription);

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取经验库标签
                     * @return TemplateTag 经验库标签
                     * 
                     */
                    std::string GetTemplateTag() const;

                    /**
                     * 设置经验库标签
                     * @param _templateTag 经验库标签
                     * 
                     */
                    void SetTemplateTag(const std::string& _templateTag);

                    /**
                     * 判断参数 TemplateTag 是否已赋值
                     * @return TemplateTag 是否已赋值
                     * 
                     */
                    bool TemplateTagHasBeenSet() const;

                    /**
                     * 获取经验库状态。1 -- 使用中，2 -- 停用
                     * @return TemplateIsUsed 经验库状态。1 -- 使用中，2 -- 停用
                     * 
                     */
                    int64_t GetTemplateIsUsed() const;

                    /**
                     * 设置经验库状态。1 -- 使用中，2 -- 停用
                     * @param _templateIsUsed 经验库状态。1 -- 使用中，2 -- 停用
                     * 
                     */
                    void SetTemplateIsUsed(const int64_t& _templateIsUsed);

                    /**
                     * 判断参数 TemplateIsUsed 是否已赋值
                     * @return TemplateIsUsed 是否已赋值
                     * 
                     */
                    bool TemplateIsUsedHasBeenSet() const;

                    /**
                     * 获取经验库创建时间
                     * @return TemplateCreateTime 经验库创建时间
                     * 
                     */
                    std::string GetTemplateCreateTime() const;

                    /**
                     * 设置经验库创建时间
                     * @param _templateCreateTime 经验库创建时间
                     * 
                     */
                    void SetTemplateCreateTime(const std::string& _templateCreateTime);

                    /**
                     * 判断参数 TemplateCreateTime 是否已赋值
                     * @return TemplateCreateTime 是否已赋值
                     * 
                     */
                    bool TemplateCreateTimeHasBeenSet() const;

                    /**
                     * 获取经验库更新时间
                     * @return TemplateUpdateTime 经验库更新时间
                     * 
                     */
                    std::string GetTemplateUpdateTime() const;

                    /**
                     * 设置经验库更新时间
                     * @param _templateUpdateTime 经验库更新时间
                     * 
                     */
                    void SetTemplateUpdateTime(const std::string& _templateUpdateTime);

                    /**
                     * 判断参数 TemplateUpdateTime 是否已赋值
                     * @return TemplateUpdateTime 是否已赋值
                     * 
                     */
                    bool TemplateUpdateTimeHasBeenSet() const;

                    /**
                     * 获取经验库关联的任务数量
                     * @return TemplateUsedNum 经验库关联的任务数量
                     * 
                     */
                    int64_t GetTemplateUsedNum() const;

                    /**
                     * 设置经验库关联的任务数量
                     * @param _templateUsedNum 经验库关联的任务数量
                     * 
                     */
                    void SetTemplateUsedNum(const int64_t& _templateUsedNum);

                    /**
                     * 判断参数 TemplateUsedNum 是否已赋值
                     * @return TemplateUsedNum 是否已赋值
                     * 
                     */
                    bool TemplateUsedNumHasBeenSet() const;

                    /**
                     * 获取经验库来源 0-自建经验 1-专家推荐
                     * @return TemplateSource 经验库来源 0-自建经验 1-专家推荐
                     * 
                     */
                    int64_t GetTemplateSource() const;

                    /**
                     * 设置经验库来源 0-自建经验 1-专家推荐
                     * @param _templateSource 经验库来源 0-自建经验 1-专家推荐
                     * 
                     */
                    void SetTemplateSource(const int64_t& _templateSource);

                    /**
                     * 判断参数 TemplateSource 是否已赋值
                     * @return TemplateSource 是否已赋值
                     * 
                     */
                    bool TemplateSourceHasBeenSet() const;

                private:

                    /**
                     * 经验库ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 经验库标题
                     */
                    std::string m_templateTitle;
                    bool m_templateTitleHasBeenSet;

                    /**
                     * 经验库描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * 经验库标签
                     */
                    std::string m_templateTag;
                    bool m_templateTagHasBeenSet;

                    /**
                     * 经验库状态。1 -- 使用中，2 -- 停用
                     */
                    int64_t m_templateIsUsed;
                    bool m_templateIsUsedHasBeenSet;

                    /**
                     * 经验库创建时间
                     */
                    std::string m_templateCreateTime;
                    bool m_templateCreateTimeHasBeenSet;

                    /**
                     * 经验库更新时间
                     */
                    std::string m_templateUpdateTime;
                    bool m_templateUpdateTimeHasBeenSet;

                    /**
                     * 经验库关联的任务数量
                     */
                    int64_t m_templateUsedNum;
                    bool m_templateUsedNumHasBeenSet;

                    /**
                     * 经验库来源 0-自建经验 1-专家推荐
                     */
                    int64_t m_templateSource;
                    bool m_templateSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_TEMPLATELISTITEM_H_
