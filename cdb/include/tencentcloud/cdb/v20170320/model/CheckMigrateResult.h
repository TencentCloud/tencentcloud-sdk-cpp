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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CHECKMIGRATERESULT_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CHECKMIGRATERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 迁移集群版校验结果
                */
                class CheckMigrateResult : public AbstractModel
                {
                public:
                    CheckMigrateResult();
                    ~CheckMigrateResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取校验名称
                     * @return Name 校验名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置校验名称
                     * @param _name 校验名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取校验结果，通过为pass，失败为fail
                     * @return Status 校验结果，通过为pass，失败为fail
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置校验结果，通过为pass，失败为fail
                     * @param _status 校验结果，通过为pass，失败为fail
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取校验结果描述
                     * @return Desc 校验结果描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置校验结果描述
                     * @param _desc 校验结果描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 校验名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 校验结果，通过为pass，失败为fail
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 校验结果描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CHECKMIGRATERESULT_H_
