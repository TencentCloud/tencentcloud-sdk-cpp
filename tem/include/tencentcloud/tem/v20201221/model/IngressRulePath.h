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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSRULEPATH_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSRULEPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20201221/model/IngressRuleBackend.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Ingress Rule Path 配置
                */
                class IngressRulePath : public AbstractModel
                {
                public:
                    IngressRulePath();
                    ~IngressRulePath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取path 信息
                     * @return Path path 信息
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置path 信息
                     * @param _path path 信息
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取backend 配置
                     * @return Backend backend 配置
                     * 
                     */
                    IngressRuleBackend GetBackend() const;

                    /**
                     * 设置backend 配置
                     * @param _backend backend 配置
                     * 
                     */
                    void SetBackend(const IngressRuleBackend& _backend);

                    /**
                     * 判断参数 Backend 是否已赋值
                     * @return Backend 是否已赋值
                     * 
                     */
                    bool BackendHasBeenSet() const;

                private:

                    /**
                     * path 信息
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * backend 配置
                     */
                    IngressRuleBackend m_backend;
                    bool m_backendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_INGRESSRULEPATH_H_
