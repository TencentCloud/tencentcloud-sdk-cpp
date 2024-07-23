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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_PARAMTPL_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_PARAMTPL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 数据库参数模板
                */
                class ParamTpl : public AbstractModel
                {
                public:
                    ParamTpl();
                    ~ParamTpl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数模板名称
                     * @return TplName 参数模板名称
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置参数模板名称
                     * @param _tplName 参数模板名称
                     * 
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                    /**
                     * 获取参数模板ID
                     * @return TplId 参数模板ID
                     * 
                     */
                    std::string GetTplId() const;

                    /**
                     * 设置参数模板ID
                     * @param _tplId 参数模板ID
                     * 
                     */
                    void SetTplId(const std::string& _tplId);

                    /**
                     * 判断参数 TplId 是否已赋值
                     * @return TplId 是否已赋值
                     * 
                     */
                    bool TplIdHasBeenSet() const;

                    /**
                     * 获取适用数据库版本
                     * @return MongoVersion 适用数据库版本
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置适用数据库版本
                     * @param _mongoVersion 适用数据库版本
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取适用数据库类型
                     * @return ClusterType 适用数据库类型
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置适用数据库类型
                     * @param _clusterType 适用数据库类型
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取参数模板描述
                     * @return TplDesc 参数模板描述
                     * 
                     */
                    std::string GetTplDesc() const;

                    /**
                     * 设置参数模板描述
                     * @param _tplDesc 参数模板描述
                     * 
                     */
                    void SetTplDesc(const std::string& _tplDesc);

                    /**
                     * 判断参数 TplDesc 是否已赋值
                     * @return TplDesc 是否已赋值
                     * 
                     */
                    bool TplDescHasBeenSet() const;

                    /**
                     * 获取模板类型，包括DEFAULT（默认模板）及CUSTOMIZE（定制模板）两种类型
                     * @return TplType 模板类型，包括DEFAULT（默认模板）及CUSTOMIZE（定制模板）两种类型
                     * 
                     */
                    std::string GetTplType() const;

                    /**
                     * 设置模板类型，包括DEFAULT（默认模板）及CUSTOMIZE（定制模板）两种类型
                     * @param _tplType 模板类型，包括DEFAULT（默认模板）及CUSTOMIZE（定制模板）两种类型
                     * 
                     */
                    void SetTplType(const std::string& _tplType);

                    /**
                     * 判断参数 TplType 是否已赋值
                     * @return TplType 是否已赋值
                     * 
                     */
                    bool TplTypeHasBeenSet() const;

                private:

                    /**
                     * 参数模板名称
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * 参数模板ID
                     */
                    std::string m_tplId;
                    bool m_tplIdHasBeenSet;

                    /**
                     * 适用数据库版本
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 适用数据库类型
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 参数模板描述
                     */
                    std::string m_tplDesc;
                    bool m_tplDescHasBeenSet;

                    /**
                     * 模板类型，包括DEFAULT（默认模板）及CUSTOMIZE（定制模板）两种类型
                     */
                    std::string m_tplType;
                    bool m_tplTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_PARAMTPL_H_
