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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RELATIONLOGSET_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RELATIONLOGSET_H_

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
                * 工作区关联的日志集
                */
                class RelationLogset : public AbstractModel
                {
                public:
                    RelationLogset();
                    ~RelationLogset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日志集id</p>
                     * @return LogsetId <p>日志集id</p>
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置<p>日志集id</p>
                     * @param _logsetId <p>日志集id</p>
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>日志集名称</p>
                     * @return LogsetName <p>日志集名称</p>
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置<p>日志集名称</p>
                     * @param _logsetName <p>日志集名称</p>
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                private:

                    /**
                     * <p>日志集id</p>
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * <p>日志集名称</p>
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RELATIONLOGSET_H_
