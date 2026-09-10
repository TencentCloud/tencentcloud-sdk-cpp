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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWAISERVICESOURCE_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWAISERVICESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwAIServiceSourceInfo.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI服务来源
                */
                class CNAPIGwAIServiceSource : public AbstractModel
                {
                public:
                    CNAPIGwAIServiceSource();
                    ~CNAPIGwAIServiceSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务来源</p>
                     * @return SourceName <p>服务来源</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>服务来源</p>
                     * @param _sourceName <p>服务来源</p>
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取<p>服务ID</p>
                     * @return SourceId <p>服务ID</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _sourceId <p>服务ID</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取<p>来源类型</p>
                     * @return SourceType <p>来源类型</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>来源类型</p>
                     * @param _sourceType <p>来源类型</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>来源产品</p>
                     * @return SourceProduct <p>来源产品</p>
                     * 
                     */
                    std::string GetSourceProduct() const;

                    /**
                     * 设置<p>来源产品</p>
                     * @param _sourceProduct <p>来源产品</p>
                     * 
                     */
                    void SetSourceProduct(const std::string& _sourceProduct);

                    /**
                     * 判断参数 SourceProduct 是否已赋值
                     * @return SourceProduct 是否已赋值
                     * 
                     */
                    bool SourceProductHasBeenSet() const;

                    /**
                     * 获取<p>来源配置信息</p>
                     * @return SourceInfo <p>来源配置信息</p>
                     * 
                     */
                    CNAPIGwAIServiceSourceInfo GetSourceInfo() const;

                    /**
                     * 设置<p>来源配置信息</p>
                     * @param _sourceInfo <p>来源配置信息</p>
                     * 
                     */
                    void SetSourceInfo(const CNAPIGwAIServiceSourceInfo& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>服务来源</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>来源类型</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>来源产品</p>
                     */
                    std::string m_sourceProduct;
                    bool m_sourceProductHasBeenSet;

                    /**
                     * <p>来源配置信息</p>
                     */
                    CNAPIGwAIServiceSourceInfo m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWAISERVICESOURCE_H_
