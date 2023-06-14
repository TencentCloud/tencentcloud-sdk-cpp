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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_METADBINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_METADBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 元数据库信息
                */
                class MetaDbInfo : public AbstractModel
                {
                public:
                    MetaDbInfo();
                    ~MetaDbInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取元数据类型。
                     * @return MetaType 元数据类型。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置元数据类型。
                     * @param _metaType 元数据类型。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取统一元数据库实例ID。
                     * @return UnifyMetaInstanceId 统一元数据库实例ID。
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置统一元数据库实例ID。
                     * @param _unifyMetaInstanceId 统一元数据库实例ID。
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取自建元数据库信息。
                     * @return MetaDBInfo 自建元数据库信息。
                     * 
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置自建元数据库信息。
                     * @param _metaDBInfo 自建元数据库信息。
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                private:

                    /**
                     * 元数据类型。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 统一元数据库实例ID。
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * 自建元数据库信息。
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_METADBINFO_H_
