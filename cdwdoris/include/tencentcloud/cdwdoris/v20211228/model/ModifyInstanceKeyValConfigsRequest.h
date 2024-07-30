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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYINSTANCEKEYVALCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYINSTANCEKEYVALCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/InstanceConfigItem.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ModifyInstanceKeyValConfigs请求参数结构体
                */
                class ModifyInstanceKeyValConfigsRequest : public AbstractModel
                {
                public:
                    ModifyInstanceKeyValConfigsRequest();
                    ~ModifyInstanceKeyValConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取新增配置列表
                     * @return AddItems 新增配置列表
                     * 
                     */
                    std::vector<InstanceConfigItem> GetAddItems() const;

                    /**
                     * 设置新增配置列表
                     * @param _addItems 新增配置列表
                     * 
                     */
                    void SetAddItems(const std::vector<InstanceConfigItem>& _addItems);

                    /**
                     * 判断参数 AddItems 是否已赋值
                     * @return AddItems 是否已赋值
                     * 
                     */
                    bool AddItemsHasBeenSet() const;

                    /**
                     * 获取更新配置列表
                     * @return UpdateItems 更新配置列表
                     * 
                     */
                    std::vector<InstanceConfigItem> GetUpdateItems() const;

                    /**
                     * 设置更新配置列表
                     * @param _updateItems 更新配置列表
                     * 
                     */
                    void SetUpdateItems(const std::vector<InstanceConfigItem>& _updateItems);

                    /**
                     * 判断参数 UpdateItems 是否已赋值
                     * @return UpdateItems 是否已赋值
                     * 
                     */
                    bool UpdateItemsHasBeenSet() const;

                    /**
                     * 获取删除配置列表
                     * @return DelItems 删除配置列表
                     * 
                     */
                    std::vector<InstanceConfigItem> GetDelItems() const;

                    /**
                     * 设置删除配置列表
                     * @param _delItems 删除配置列表
                     * 
                     */
                    void SetDelItems(const std::vector<InstanceConfigItem>& _delItems);

                    /**
                     * 判断参数 DelItems 是否已赋值
                     * @return DelItems 是否已赋值
                     * 
                     */
                    bool DelItemsHasBeenSet() const;

                    /**
                     * 获取备注（50字以内）
                     * @return Message 备注（50字以内）
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置备注（50字以内）
                     * @param _message 备注（50字以内）
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取热更新列表
                     * @return HotUpdateItems 热更新列表
                     * 
                     */
                    std::vector<InstanceConfigItem> GetHotUpdateItems() const;

                    /**
                     * 设置热更新列表
                     * @param _hotUpdateItems 热更新列表
                     * 
                     */
                    void SetHotUpdateItems(const std::vector<InstanceConfigItem>& _hotUpdateItems);

                    /**
                     * 判断参数 HotUpdateItems 是否已赋值
                     * @return HotUpdateItems 是否已赋值
                     * 
                     */
                    bool HotUpdateItemsHasBeenSet() const;

                    /**
                     * 获取删除配置列表
                     * @return DeleteItems 删除配置列表
                     * 
                     */
                    InstanceConfigItem GetDeleteItems() const;

                    /**
                     * 设置删除配置列表
                     * @param _deleteItems 删除配置列表
                     * 
                     */
                    void SetDeleteItems(const InstanceConfigItem& _deleteItems);

                    /**
                     * 判断参数 DeleteItems 是否已赋值
                     * @return DeleteItems 是否已赋值
                     * 
                     */
                    bool DeleteItemsHasBeenSet() const;

                    /**
                     * 获取ip地址
                     * @return IPAddress ip地址
                     * 
                     */
                    std::string GetIPAddress() const;

                    /**
                     * 设置ip地址
                     * @param _iPAddress ip地址
                     * 
                     */
                    void SetIPAddress(const std::string& _iPAddress);

                    /**
                     * 判断参数 IPAddress 是否已赋值
                     * @return IPAddress 是否已赋值
                     * 
                     */
                    bool IPAddressHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 新增配置列表
                     */
                    std::vector<InstanceConfigItem> m_addItems;
                    bool m_addItemsHasBeenSet;

                    /**
                     * 更新配置列表
                     */
                    std::vector<InstanceConfigItem> m_updateItems;
                    bool m_updateItemsHasBeenSet;

                    /**
                     * 删除配置列表
                     */
                    std::vector<InstanceConfigItem> m_delItems;
                    bool m_delItemsHasBeenSet;

                    /**
                     * 备注（50字以内）
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 热更新列表
                     */
                    std::vector<InstanceConfigItem> m_hotUpdateItems;
                    bool m_hotUpdateItemsHasBeenSet;

                    /**
                     * 删除配置列表
                     */
                    InstanceConfigItem m_deleteItems;
                    bool m_deleteItemsHasBeenSet;

                    /**
                     * ip地址
                     */
                    std::string m_iPAddress;
                    bool m_iPAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYINSTANCEKEYVALCONFIGSREQUEST_H_
