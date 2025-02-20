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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DropDMSDatabase请求参数结构体
                */
                class DropDMSDatabaseRequest : public AbstractModel
                {
                public:
                    DropDMSDatabaseRequest();
                    ~DropDMSDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名称
                     * @return Name 数据库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据库名称
                     * @param _name 数据库名称
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
                     * 获取是否删除数据
                     * @return DeleteData 是否删除数据
                     * 
                     */
                    bool GetDeleteData() const;

                    /**
                     * 设置是否删除数据
                     * @param _deleteData 是否删除数据
                     * 
                     */
                    void SetDeleteData(const bool& _deleteData);

                    /**
                     * 判断参数 DeleteData 是否已赋值
                     * @return DeleteData 是否已赋值
                     * 
                     */
                    bool DeleteDataHasBeenSet() const;

                    /**
                     * 获取是否级联删除
                     * @return Cascade 是否级联删除
                     * 
                     */
                    bool GetCascade() const;

                    /**
                     * 设置是否级联删除
                     * @param _cascade 是否级联删除
                     * 
                     */
                    void SetCascade(const bool& _cascade);

                    /**
                     * 判断参数 Cascade 是否已赋值
                     * @return Cascade 是否已赋值
                     * 
                     */
                    bool CascadeHasBeenSet() const;

                    /**
                     * 获取数据源连接名
                     * @return DatasourceConnectionName 数据源连接名
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源连接名
                     * @param _datasourceConnectionName 数据源连接名
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否删除数据
                     */
                    bool m_deleteData;
                    bool m_deleteDataHasBeenSet;

                    /**
                     * 是否级联删除
                     */
                    bool m_cascade;
                    bool m_cascadeHasBeenSet;

                    /**
                     * 数据源连接名
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DROPDMSDATABASEREQUEST_H_
