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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_BINDDSPARESOURCEDATABASESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_BINDDSPARESOURCEDATABASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DbResourceItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * BindDSPAResourceDatabases请求参数结构体
                */
                class BindDSPAResourceDatabasesRequest : public AbstractModel
                {
                public:
                    BindDSPAResourceDatabasesRequest();
                    ~BindDSPAResourceDatabasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID。
                     * @param _dspaId DSPA实例ID。
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取数据库实例ID。
                     * @return ResourceId 数据库实例ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置数据库实例ID。
                     * @param _resourceId 数据库实例ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取数据库实例类型。
                     * @return MetaType 数据库实例类型。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置数据库实例类型。
                     * @param _metaType 数据库实例类型。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取绑定DB列表。
                     * @return BindDbItems 绑定DB列表。
                     * 
                     */
                    std::vector<DbResourceItem> GetBindDbItems() const;

                    /**
                     * 设置绑定DB列表。
                     * @param _bindDbItems 绑定DB列表。
                     * 
                     */
                    void SetBindDbItems(const std::vector<DbResourceItem>& _bindDbItems);

                    /**
                     * 判断参数 BindDbItems 是否已赋值
                     * @return BindDbItems 是否已赋值
                     * 
                     */
                    bool BindDbItemsHasBeenSet() const;

                    /**
                     * 获取解绑DB列表。
                     * @return UnbindDbItems 解绑DB列表。
                     * 
                     */
                    std::vector<DbResourceItem> GetUnbindDbItems() const;

                    /**
                     * 设置解绑DB列表。
                     * @param _unbindDbItems 解绑DB列表。
                     * 
                     */
                    void SetUnbindDbItems(const std::vector<DbResourceItem>& _unbindDbItems);

                    /**
                     * 判断参数 UnbindDbItems 是否已赋值
                     * @return UnbindDbItems 是否已赋值
                     * 
                     */
                    bool UnbindDbItemsHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 数据库实例ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 数据库实例类型。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 绑定DB列表。
                     */
                    std::vector<DbResourceItem> m_bindDbItems;
                    bool m_bindDbItemsHasBeenSet;

                    /**
                     * 解绑DB列表。
                     */
                    std::vector<DbResourceItem> m_unbindDbItems;
                    bool m_unbindDbItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_BINDDSPARESOURCEDATABASESREQUEST_H_
