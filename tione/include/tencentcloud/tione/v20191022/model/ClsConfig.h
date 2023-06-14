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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_CLSCONFIG_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_CLSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 接入CLS服务的配置
                */
                class ClsConfig : public AbstractModel
                {
                public:
                    ClsConfig();
                    ~ClsConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入类型，可选项为free、customer
                     * @return Type 接入类型，可选项为free、customer
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置接入类型，可选项为free、customer
                     * @param _type 接入类型，可选项为free、customer
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取自定义CLS的日志集ID，只有当Type为customer时生效
                     * @return LogSetId 自定义CLS的日志集ID，只有当Type为customer时生效
                     * 
                     */
                    std::string GetLogSetId() const;

                    /**
                     * 设置自定义CLS的日志集ID，只有当Type为customer时生效
                     * @param _logSetId 自定义CLS的日志集ID，只有当Type为customer时生效
                     * 
                     */
                    void SetLogSetId(const std::string& _logSetId);

                    /**
                     * 判断参数 LogSetId 是否已赋值
                     * @return LogSetId 是否已赋值
                     * 
                     */
                    bool LogSetIdHasBeenSet() const;

                    /**
                     * 获取自定义CLS的日志主题ID，只有当Type为customer时生效
                     * @return TopicId 自定义CLS的日志主题ID，只有当Type为customer时生效
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置自定义CLS的日志主题ID，只有当Type为customer时生效
                     * @param _topicId 自定义CLS的日志主题ID，只有当Type为customer时生效
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * 接入类型，可选项为free、customer
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 自定义CLS的日志集ID，只有当Type为customer时生效
                     */
                    std::string m_logSetId;
                    bool m_logSetIdHasBeenSet;

                    /**
                     * 自定义CLS的日志主题ID，只有当Type为customer时生效
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_CLSCONFIG_H_
