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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ModifyDataSource请求参数结构体
                */
                class ModifyDataSourceRequest : public AbstractModel
                {
                public:
                    ModifyDataSourceRequest();
                    ~ModifyDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源名称，在相同SpaceName下，数据源名称不能为空
                     * @return Name 数据源名称，在相同SpaceName下，数据源名称不能为空
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源名称，在相同SpaceName下，数据源名称不能为空
                     * @param _name 数据源名称，在相同SpaceName下，数据源名称不能为空
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
                     * 获取数据源类别：绑定引擎、绑定数据库
                     * @return Category 数据源类别：绑定引擎、绑定数据库
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置数据源类别：绑定引擎、绑定数据库
                     * @param _category 数据源类别：绑定引擎、绑定数据库
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取数据源类型:枚举值
                     * @return Type 数据源类型:枚举值
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据源类型:枚举值
                     * @param _type 数据源类型:枚举值
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数据源ID
                     * @return ID 数据源ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置数据源ID
                     * @param _iD 数据源ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取业务侧数据源的配置信息扩展
                     * @return BizParams 业务侧数据源的配置信息扩展
                     * 
                     */
                    std::string GetBizParams() const;

                    /**
                     * 设置业务侧数据源的配置信息扩展
                     * @param _bizParams 业务侧数据源的配置信息扩展
                     * 
                     */
                    void SetBizParams(const std::string& _bizParams);

                    /**
                     * 判断参数 BizParams 是否已赋值
                     * @return BizParams 是否已赋值
                     * 
                     */
                    bool BizParamsHasBeenSet() const;

                    /**
                     * 获取数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
                     * @return Params 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
                     * @param _params 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取数据源描述信息
                     * @return Description 数据源描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据源描述信息
                     * @param _description 数据源描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取数据源展示名，为了可视化查看
                     * @return Display 数据源展示名，为了可视化查看
                     * 
                     */
                    std::string GetDisplay() const;

                    /**
                     * 设置数据源展示名，为了可视化查看
                     * @param _display 数据源展示名，为了可视化查看
                     * 
                     */
                    void SetDisplay(const std::string& _display);

                    /**
                     * 判断参数 Display 是否已赋值
                     * @return Display 是否已赋值
                     * 
                     */
                    bool DisplayHasBeenSet() const;

                    /**
                     * 获取若数据源列表为绑定数据库，则为db名称
                     * @return DatabaseName 若数据源列表为绑定数据库，则为db名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置若数据源列表为绑定数据库，则为db名称
                     * @param _databaseName 若数据源列表为绑定数据库，则为db名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据源引擎的实例ID，如CDB实例ID
                     * @return Instance 数据源引擎的实例ID，如CDB实例ID
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置数据源引擎的实例ID，如CDB实例ID
                     * @param _instance 数据源引擎的实例ID，如CDB实例ID
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取数据源数据源的可见性，1为可见、0为不可见。默认为1
                     * @return Status 数据源数据源的可见性，1为可见、0为不可见。默认为1
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置数据源数据源的可见性，1为可见、0为不可见。默认为1
                     * @param _status 数据源数据源的可见性，1为可见、0为不可见。默认为1
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据源所属的业务空间名称
                     * @return ClusterId 数据源所属的业务空间名称
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置数据源所属的业务空间名称
                     * @param _clusterId 数据源所属的业务空间名称
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取是否采集
                     * @return Collect 是否采集
                     * 
                     */
                    std::string GetCollect() const;

                    /**
                     * 设置是否采集
                     * @param _collect 是否采集
                     * 
                     */
                    void SetCollect(const std::string& _collect);

                    /**
                     * 判断参数 Collect 是否已赋值
                     * @return Collect 是否已赋值
                     * 
                     */
                    bool CollectHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return OwnerProjectId 项目id
                     * 
                     */
                    std::string GetOwnerProjectId() const;

                    /**
                     * 设置项目id
                     * @param _ownerProjectId 项目id
                     * 
                     */
                    void SetOwnerProjectId(const std::string& _ownerProjectId);

                    /**
                     * 判断参数 OwnerProjectId 是否已赋值
                     * @return OwnerProjectId 是否已赋值
                     * 
                     */
                    bool OwnerProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return OwnerProjectName 项目名称
                     * 
                     */
                    std::string GetOwnerProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _ownerProjectName 项目名称
                     * 
                     */
                    void SetOwnerProjectName(const std::string& _ownerProjectName);

                    /**
                     * 判断参数 OwnerProjectName 是否已赋值
                     * @return OwnerProjectName 是否已赋值
                     * 
                     */
                    bool OwnerProjectNameHasBeenSet() const;

                    /**
                     * 获取项目中文名
                     * @return OwnerProjectIdent 项目中文名
                     * 
                     */
                    std::string GetOwnerProjectIdent() const;

                    /**
                     * 设置项目中文名
                     * @param _ownerProjectIdent 项目中文名
                     * 
                     */
                    void SetOwnerProjectIdent(const std::string& _ownerProjectIdent);

                    /**
                     * 判断参数 OwnerProjectIdent 是否已赋值
                     * @return OwnerProjectIdent 是否已赋值
                     * 
                     */
                    bool OwnerProjectIdentHasBeenSet() const;

                    /**
                     * 获取cos bucket
                     * @return COSBucket cos bucket
                     * 
                     */
                    std::string GetCOSBucket() const;

                    /**
                     * 设置cos bucket
                     * @param _cOSBucket cos bucket
                     * 
                     */
                    void SetCOSBucket(const std::string& _cOSBucket);

                    /**
                     * 判断参数 COSBucket 是否已赋值
                     * @return COSBucket 是否已赋值
                     * 
                     */
                    bool COSBucketHasBeenSet() const;

                    /**
                     * 获取cos region
                     * @return COSRegion cos region
                     * 
                     */
                    std::string GetCOSRegion() const;

                    /**
                     * 设置cos region
                     * @param _cOSRegion cos region
                     * 
                     */
                    void SetCOSRegion(const std::string& _cOSRegion);

                    /**
                     * 判断参数 COSRegion 是否已赋值
                     * @return COSRegion 是否已赋值
                     * 
                     */
                    bool COSRegionHasBeenSet() const;

                    /**
                     * 获取操作项目id
                     * @return ProjectId 操作项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置操作项目id
                     * @param _projectId 操作项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取数据源开发环境配置
                     * @return DevelopmentParams 数据源开发环境配置
                     * 
                     */
                    std::string GetDevelopmentParams() const;

                    /**
                     * 设置数据源开发环境配置
                     * @param _developmentParams 数据源开发环境配置
                     * 
                     */
                    void SetDevelopmentParams(const std::string& _developmentParams);

                    /**
                     * 判断参数 DevelopmentParams 是否已赋值
                     * @return DevelopmentParams 是否已赋值
                     * 
                     */
                    bool DevelopmentParamsHasBeenSet() const;

                private:

                    /**
                     * 数据源名称，在相同SpaceName下，数据源名称不能为空
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源类别：绑定引擎、绑定数据库
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 数据源类型:枚举值
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 业务侧数据源的配置信息扩展
                     */
                    std::string m_bizParams;
                    bool m_bizParamsHasBeenSet;

                    /**
                     * 数据源的配置信息，以JSON KV存储，根据每个数据源类型不同，而KV存储信息不同
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 数据源描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 数据源展示名，为了可视化查看
                     */
                    std::string m_display;
                    bool m_displayHasBeenSet;

                    /**
                     * 若数据源列表为绑定数据库，则为db名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据源引擎的实例ID，如CDB实例ID
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 数据源数据源的可见性，1为可见、0为不可见。默认为1
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据源所属的业务空间名称
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否采集
                     */
                    std::string m_collect;
                    bool m_collectHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_ownerProjectId;
                    bool m_ownerProjectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_ownerProjectName;
                    bool m_ownerProjectNameHasBeenSet;

                    /**
                     * 项目中文名
                     */
                    std::string m_ownerProjectIdent;
                    bool m_ownerProjectIdentHasBeenSet;

                    /**
                     * cos bucket
                     */
                    std::string m_cOSBucket;
                    bool m_cOSBucketHasBeenSet;

                    /**
                     * cos region
                     */
                    std::string m_cOSRegion;
                    bool m_cOSRegionHasBeenSet;

                    /**
                     * 操作项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源开发环境配置
                     */
                    std::string m_developmentParams;
                    bool m_developmentParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYDATASOURCEREQUEST_H_
