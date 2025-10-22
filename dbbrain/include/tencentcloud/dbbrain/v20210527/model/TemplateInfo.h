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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 通知模板
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板id,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * @return TemplateId 模板id,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * @param _templateId 模板id,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * @return TemplateName 模板名,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * @param _templateName 模板名,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                private:

                    /**
                     * 模板id,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名,通过接口[通知模板查询](https://cloud.tencent.com/document/product/1130/97726)获得。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TEMPLATEINFO_H_
