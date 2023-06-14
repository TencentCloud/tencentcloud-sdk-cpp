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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBRENAMERES_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBRENAMERES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 数据库重命名返回参数
                */
                class DBRenameRes : public AbstractModel
                {
                public:
                    DBRenameRes();
                    ~DBRenameRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新数据库名称
                     * @return NewName 新数据库名称
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置新数据库名称
                     * @param _newName 新数据库名称
                     * 
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                    /**
                     * 获取老数据库名称
                     * @return OldName 老数据库名称
                     * 
                     */
                    std::string GetOldName() const;

                    /**
                     * 设置老数据库名称
                     * @param _oldName 老数据库名称
                     * 
                     */
                    void SetOldName(const std::string& _oldName);

                    /**
                     * 判断参数 OldName 是否已赋值
                     * @return OldName 是否已赋值
                     * 
                     */
                    bool OldNameHasBeenSet() const;

                private:

                    /**
                     * 新数据库名称
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                    /**
                     * 老数据库名称
                     */
                    std::string m_oldName;
                    bool m_oldNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBRENAMERES_H_
