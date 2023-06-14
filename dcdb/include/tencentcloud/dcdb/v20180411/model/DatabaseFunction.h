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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEFUNCTION_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEFUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 数据库函数信息
                */
                class DatabaseFunction : public AbstractModel
                {
                public:
                    DatabaseFunction();
                    ~DatabaseFunction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数名称
                     * @return Func 函数名称
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置函数名称
                     * @param _func 函数名称
                     * 
                     */
                    void SetFunc(const std::string& _func);

                    /**
                     * 判断参数 Func 是否已赋值
                     * @return Func 是否已赋值
                     * 
                     */
                    bool FuncHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEFUNCTION_H_
