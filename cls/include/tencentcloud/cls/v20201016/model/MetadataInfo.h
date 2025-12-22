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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METADATAINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METADATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Splunk任务投递元信息
                */
                class MetadataInfo : public AbstractModel
                {
                public:
                    MetadataInfo();
                    ~MetadataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据格式,rawlog/json
                     * @return Format 数据格式,rawlog/json
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置数据格式,rawlog/json
                     * @param _format 数据格式,rawlog/json
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取投递字段，包括\_\_SOURCE\_\_、\_\_FILENAME\_\_
、\_\_TIMESTAMP\_\_、\_\_HOSTNAME\_\_、\_\_PKG\_ID\_\_
                     * @return MetaFields 投递字段，包括\_\_SOURCE\_\_、\_\_FILENAME\_\_
、\_\_TIMESTAMP\_\_、\_\_HOSTNAME\_\_、\_\_PKG\_ID\_\_
                     * 
                     */
                    std::vector<std::string> GetMetaFields() const;

                    /**
                     * 设置投递字段，包括\_\_SOURCE\_\_、\_\_FILENAME\_\_
、\_\_TIMESTAMP\_\_、\_\_HOSTNAME\_\_、\_\_PKG\_ID\_\_
                     * @param _metaFields 投递字段，包括\_\_SOURCE\_\_、\_\_FILENAME\_\_
、\_\_TIMESTAMP\_\_、\_\_HOSTNAME\_\_、\_\_PKG\_ID\_\_
                     * 
                     */
                    void SetMetaFields(const std::vector<std::string>& _metaFields);

                    /**
                     * 判断参数 MetaFields 是否已赋值
                     * @return MetaFields 是否已赋值
                     * 
                     */
                    bool MetaFieldsHasBeenSet() const;

                    /**
                     * 获取是否投递__TAG__字段
                     * @return EnableTag 是否投递__TAG__字段
                     * 
                     */
                    bool GetEnableTag() const;

                    /**
                     * 设置是否投递__TAG__字段
                     * @param _enableTag 是否投递__TAG__字段
                     * 
                     */
                    void SetEnableTag(const bool& _enableTag);

                    /**
                     * 判断参数 EnableTag 是否已赋值
                     * @return EnableTag 是否已赋值
                     * 
                     */
                    bool EnableTagHasBeenSet() const;

                    /**
                     * 获取JSON是否平铺，投递__TAG__字段时必填
                     * @return TagJsonTiled JSON是否平铺，投递__TAG__字段时必填
                     * 
                     */
                    bool GetTagJsonTiled() const;

                    /**
                     * 设置JSON是否平铺，投递__TAG__字段时必填
                     * @param _tagJsonTiled JSON是否平铺，投递__TAG__字段时必填
                     * 
                     */
                    void SetTagJsonTiled(const bool& _tagJsonTiled);

                    /**
                     * 判断参数 TagJsonTiled 是否已赋值
                     * @return TagJsonTiled 是否已赋值
                     * 
                     */
                    bool TagJsonTiledHasBeenSet() const;

                private:

                    /**
                     * 数据格式,rawlog/json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 投递字段，包括\_\_SOURCE\_\_、\_\_FILENAME\_\_
、\_\_TIMESTAMP\_\_、\_\_HOSTNAME\_\_、\_\_PKG\_ID\_\_
                     */
                    std::vector<std::string> m_metaFields;
                    bool m_metaFieldsHasBeenSet;

                    /**
                     * 是否投递__TAG__字段
                     */
                    bool m_enableTag;
                    bool m_enableTagHasBeenSet;

                    /**
                     * JSON是否平铺，投递__TAG__字段时必填
                     */
                    bool m_tagJsonTiled;
                    bool m_tagJsonTiledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METADATAINFO_H_
