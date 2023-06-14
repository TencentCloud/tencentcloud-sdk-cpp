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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEPROCEDURE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEPROCEDURE_H_

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
                * 数据库存储过程信息
                */
                class DatabaseProcedure : public AbstractModel
                {
                public:
                    DatabaseProcedure();
                    ~DatabaseProcedure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储过程名称
                     * @return Proc 存储过程名称
                     * 
                     */
                    std::string GetProc() const;

                    /**
                     * 设置存储过程名称
                     * @param _proc 存储过程名称
                     * 
                     */
                    void SetProc(const std::string& _proc);

                    /**
                     * 判断参数 Proc 是否已赋值
                     * @return Proc 是否已赋值
                     * 
                     */
                    bool ProcHasBeenSet() const;

                private:

                    /**
                     * 存储过程名称
                     */
                    std::string m_proc;
                    bool m_procHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DATABASEPROCEDURE_H_
