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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATEDETAILRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ParamDetail.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeParamTemplateDetail返回参数结构体
                */
                class DescribeParamTemplateDetailResponse : public AbstractModel
                {
                public:
                    DescribeParamTemplateDetailResponse();
                    ~DescribeParamTemplateDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板ID
                     * @return TemplateId 参数模板ID
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取参数模板名称
                     * @return TemplateName 参数模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取参数模板描述
                     * @return TemplateDescription 参数模板描述
                     * 
                     */
                    std::string GetTemplateDescription() const;

                    /**
                     * 判断参数 TemplateDescription 是否已赋值
                     * @return TemplateDescription 是否已赋值
                     * 
                     */
                    bool TemplateDescriptionHasBeenSet() const;

                    /**
                     * 获取引擎版本
                     * @return EngineVersion 引擎版本
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取参数总条数
                     * @return TotalCount 参数总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取参数列表
                     * @return Items 参数列表
                     * 
                     */
                    std::vector<ParamDetail> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取数据库类型，可选值：NORMAL，SERVERLESS
                     * @return DbMode 数据库类型，可选值：NORMAL，SERVERLESS
                     * 
                     */
                    std::string GetDbMode() const;

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     * 
                     */
                    bool DbModeHasBeenSet() const;

                private:

                    /**
                     * 参数模板ID
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 参数模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 参数模板描述
                     */
                    std::string m_templateDescription;
                    bool m_templateDescriptionHasBeenSet;

                    /**
                     * 引擎版本
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 参数总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 参数列表
                     */
                    std::vector<ParamDetail> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 数据库类型，可选值：NORMAL，SERVERLESS
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPARAMTEMPLATEDETAILRESPONSE_H_
