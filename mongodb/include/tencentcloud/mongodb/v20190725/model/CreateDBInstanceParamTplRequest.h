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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEPARAMTPLREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEPARAMTPLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ParamType.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateDBInstanceParamTpl请求参数结构体
                */
                class CreateDBInstanceParamTplRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceParamTplRequest();
                    ~CreateDBInstanceParamTplRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板名称。
                     * @return TplName 参数模板名称。
                     * 
                     */
                    std::string GetTplName() const;

                    /**
                     * 设置参数模板名称。
                     * @param _tplName 参数模板名称。
                     * 
                     */
                    void SetTplName(const std::string& _tplName);

                    /**
                     * 判断参数 TplName 是否已赋值
                     * @return TplName 是否已赋值
                     * 
                     */
                    bool TplNameHasBeenSet() const;

                    /**
                     * 获取版本号，该参数模板支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是：MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。当MirrorTplId为空时，该字段必填。
                     * @return MongoVersion 版本号，该参数模板支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是：MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。当MirrorTplId为空时，该字段必填。
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置版本号，该参数模板支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是：MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。当MirrorTplId为空时，该字段必填。
                     * @param _mongoVersion 版本号，该参数模板支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是：MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。当MirrorTplId为空时，该字段必填。
                     * 
                     */
                    void SetMongoVersion(const std::string& _mongoVersion);

                    /**
                     * 判断参数 MongoVersion 是否已赋值
                     * @return MongoVersion 是否已赋值
                     * 
                     */
                    bool MongoVersionHasBeenSet() const;

                    /**
                     * 获取实例类型，REPLSET-副本集，SHARD-分片集群，STANDALONE-单节点
当MirrorTplId为空时，该字段必填。
                     * @return ClusterType 实例类型，REPLSET-副本集，SHARD-分片集群，STANDALONE-单节点
当MirrorTplId为空时，该字段必填。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置实例类型，REPLSET-副本集，SHARD-分片集群，STANDALONE-单节点
当MirrorTplId为空时，该字段必填。
                     * @param _clusterType 实例类型，REPLSET-副本集，SHARD-分片集群，STANDALONE-单节点
当MirrorTplId为空时，该字段必填。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取模板描述信息。
                     * @return TplDesc 模板描述信息。
                     * 
                     */
                    std::string GetTplDesc() const;

                    /**
                     * 设置模板描述信息。
                     * @param _tplDesc 模板描述信息。
                     * 
                     */
                    void SetTplDesc(const std::string& _tplDesc);

                    /**
                     * 判断参数 TplDesc 是否已赋值
                     * @return TplDesc 是否已赋值
                     * 
                     */
                    bool TplDescHasBeenSet() const;

                    /**
                     * 获取模板参数，若为空，则以系统默认模板作为新版本参数。
                     * @return Params 模板参数，若为空，则以系统默认模板作为新版本参数。
                     * 
                     */
                    std::vector<ParamType> GetParams() const;

                    /**
                     * 设置模板参数，若为空，则以系统默认模板作为新版本参数。
                     * @param _params 模板参数，若为空，则以系统默认模板作为新版本参数。
                     * 
                     */
                    void SetParams(const std::vector<ParamType>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取镜像模板ID，若该字段不为空，则以该模板为镜像，克隆出一个新的模板。注意：MirrorTplId不为空时，MongoVersion及ClusterType将以MirrorTpl模板的版本及实例类型为准。
                     * @return MirrorTplId 镜像模板ID，若该字段不为空，则以该模板为镜像，克隆出一个新的模板。注意：MirrorTplId不为空时，MongoVersion及ClusterType将以MirrorTpl模板的版本及实例类型为准。
                     * 
                     */
                    std::string GetMirrorTplId() const;

                    /**
                     * 设置镜像模板ID，若该字段不为空，则以该模板为镜像，克隆出一个新的模板。注意：MirrorTplId不为空时，MongoVersion及ClusterType将以MirrorTpl模板的版本及实例类型为准。
                     * @param _mirrorTplId 镜像模板ID，若该字段不为空，则以该模板为镜像，克隆出一个新的模板。注意：MirrorTplId不为空时，MongoVersion及ClusterType将以MirrorTpl模板的版本及实例类型为准。
                     * 
                     */
                    void SetMirrorTplId(const std::string& _mirrorTplId);

                    /**
                     * 判断参数 MirrorTplId 是否已赋值
                     * @return MirrorTplId 是否已赋值
                     * 
                     */
                    bool MirrorTplIdHasBeenSet() const;

                private:

                    /**
                     * 参数模板名称。
                     */
                    std::string m_tplName;
                    bool m_tplNameHasBeenSet;

                    /**
                     * 版本号，该参数模板支持的售卖版本请参照查询云数据库的售卖规格（DescribeSpecInfo）返回结果。参数与版本对应关系是：MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。当MirrorTplId为空时，该字段必填。
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 实例类型，REPLSET-副本集，SHARD-分片集群，STANDALONE-单节点
当MirrorTplId为空时，该字段必填。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 模板描述信息。
                     */
                    std::string m_tplDesc;
                    bool m_tplDescHasBeenSet;

                    /**
                     * 模板参数，若为空，则以系统默认模板作为新版本参数。
                     */
                    std::vector<ParamType> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 镜像模板ID，若该字段不为空，则以该模板为镜像，克隆出一个新的模板。注意：MirrorTplId不为空时，MongoVersion及ClusterType将以MirrorTpl模板的版本及实例类型为准。
                     */
                    std::string m_mirrorTplId;
                    bool m_mirrorTplIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEPARAMTPLREQUEST_H_
