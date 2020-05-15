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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKINSTANCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * CreateNotebookInstance请求参数结构体
                */
                class CreateNotebookInstanceRequest : public AbstractModel
                {
                public:
                    CreateNotebookInstanceRequest();
                    ~CreateNotebookInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例名称
                     * @return NotebookInstanceName Notebook实例名称
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置Notebook实例名称
                     * @param NotebookInstanceName Notebook实例名称
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取Notebook算力类型
                     * @return InstanceType Notebook算力类型
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Notebook算力类型
                     * @param InstanceType Notebook算力类型
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取数据卷大小(GB)
                     * @return VolumeSizeInGB 数据卷大小(GB)
                     */
                    uint64_t GetVolumeSizeInGB() const;

                    /**
                     * 设置数据卷大小(GB)
                     * @param VolumeSizeInGB 数据卷大小(GB)
                     */
                    void SetVolumeSizeInGB(const uint64_t& _volumeSizeInGB);

                    /**
                     * 判断参数 VolumeSizeInGB 是否已赋值
                     * @return VolumeSizeInGB 是否已赋值
                     */
                    bool VolumeSizeInGBHasBeenSet() const;

                    /**
                     * 获取外网访问权限，可取值Enabled/Disabled
                     * @return DirectInternetAccess 外网访问权限，可取值Enabled/Disabled
                     */
                    std::string GetDirectInternetAccess() const;

                    /**
                     * 设置外网访问权限，可取值Enabled/Disabled
                     * @param DirectInternetAccess 外网访问权限，可取值Enabled/Disabled
                     */
                    void SetDirectInternetAccess(const std::string& _directInternetAccess);

                    /**
                     * 判断参数 DirectInternetAccess 是否已赋值
                     * @return DirectInternetAccess 是否已赋值
                     */
                    bool DirectInternetAccessHasBeenSet() const;

                    /**
                     * 获取Root用户权限，可取值Enabled/Disabled
                     * @return RootAccess Root用户权限，可取值Enabled/Disabled
                     */
                    std::string GetRootAccess() const;

                    /**
                     * 设置Root用户权限，可取值Enabled/Disabled
                     * @param RootAccess Root用户权限，可取值Enabled/Disabled
                     */
                    void SetRootAccess(const std::string& _rootAccess);

                    /**
                     * 判断参数 RootAccess 是否已赋值
                     * @return RootAccess 是否已赋值
                     */
                    bool RootAccessHasBeenSet() const;

                    /**
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param SubnetId 子网ID
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取生命周期脚本名称
                     * @return LifecycleScriptsName 生命周期脚本名称
                     */
                    std::string GetLifecycleScriptsName() const;

                    /**
                     * 设置生命周期脚本名称
                     * @param LifecycleScriptsName 生命周期脚本名称
                     */
                    void SetLifecycleScriptsName(const std::string& _lifecycleScriptsName);

                    /**
                     * 判断参数 LifecycleScriptsName 是否已赋值
                     * @return LifecycleScriptsName 是否已赋值
                     */
                    bool LifecycleScriptsNameHasBeenSet() const;

                    /**
                     * 获取默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * @return DefaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::string GetDefaultCodeRepository() const;

                    /**
                     * 设置默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     * @param DefaultCodeRepository 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    void SetDefaultCodeRepository(const std::string& _defaultCodeRepository);

                    /**
                     * 判断参数 DefaultCodeRepository 是否已赋值
                     * @return DefaultCodeRepository 是否已赋值
                     */
                    bool DefaultCodeRepositoryHasBeenSet() const;

                    /**
                     * 获取其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * @return AdditionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::vector<std::string> GetAdditionalCodeRepositories() const;

                    /**
                     * 设置其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     * @param AdditionalCodeRepositories 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    void SetAdditionalCodeRepositories(const std::vector<std::string>& _additionalCodeRepositories);

                    /**
                     * 判断参数 AdditionalCodeRepositories 是否已赋值
                     * @return AdditionalCodeRepositories 是否已赋值
                     */
                    bool AdditionalCodeRepositoriesHasBeenSet() const;

                    /**
                     * 获取是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
                     * @return ClsAccess 是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
                     */
                    std::string GetClsAccess() const;

                    /**
                     * 设置是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
                     * @param ClsAccess 是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
                     */
                    void SetClsAccess(const std::string& _clsAccess);

                    /**
                     * 判断参数 ClsAccess 是否已赋值
                     * @return ClsAccess 是否已赋值
                     */
                    bool ClsAccessHasBeenSet() const;

                private:

                    /**
                     * Notebook实例名称
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * Notebook算力类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 数据卷大小(GB)
                     */
                    uint64_t m_volumeSizeInGB;
                    bool m_volumeSizeInGBHasBeenSet;

                    /**
                     * 外网访问权限，可取值Enabled/Disabled
                     */
                    std::string m_directInternetAccess;
                    bool m_directInternetAccessHasBeenSet;

                    /**
                     * Root用户权限，可取值Enabled/Disabled
                     */
                    std::string m_rootAccess;
                    bool m_rootAccessHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 生命周期脚本名称
                     */
                    std::string m_lifecycleScriptsName;
                    bool m_lifecycleScriptsNameHasBeenSet;

                    /**
                     * 默认存储库名称
可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::string m_defaultCodeRepository;
                    bool m_defaultCodeRepositoryHasBeenSet;

                    /**
                     * 其他存储库列表
每个元素可以是已创建的存储库名称或者已https://开头的公共git库
                     */
                    std::vector<std::string> m_additionalCodeRepositories;
                    bool m_additionalCodeRepositoriesHasBeenSet;

                    /**
                     * 是否开启CLS日志服务，可取值Enabled/Disabled，默认为Disabled
                     */
                    std::string m_clsAccess;
                    bool m_clsAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_CREATENOTEBOOKINSTANCEREQUEST_H_
