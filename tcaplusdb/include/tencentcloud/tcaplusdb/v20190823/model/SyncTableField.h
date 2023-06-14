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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEFIELD_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * 缓写表字段名称的映射
                */
                class SyncTableField : public AbstractModel
                {
                public:
                    SyncTableField();
                    ~SyncTableField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TcaplusDB表字段名称
                     * @return SourceName TcaplusDB表字段名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置TcaplusDB表字段名称
                     * @param _sourceName TcaplusDB表字段名称
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
                     * 获取目标缓写表的字段名称
                     * @return TargetName 目标缓写表的字段名称
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置目标缓写表的字段名称
                     * @param _targetName 目标缓写表的字段名称
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                private:

                    /**
                     * TcaplusDB表字段名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 目标缓写表的字段名称
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_SYNCTABLEFIELD_H_
