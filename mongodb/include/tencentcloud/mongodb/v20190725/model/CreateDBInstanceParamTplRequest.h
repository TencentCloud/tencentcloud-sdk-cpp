/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取参数模板版本号。当**MirrorTplId**为空时，该字段必填。参数模板支持的售卖版本，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/35767) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     * @return MongoVersion 参数模板版本号。当**MirrorTplId**为空时，该字段必填。参数模板支持的售卖版本，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/35767) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     * 
                     */
                    std::string GetMongoVersion() const;

                    /**
                     * 设置参数模板版本号。当**MirrorTplId**为空时，该字段必填。参数模板支持的售卖版本，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/35767) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     * @param _mongoVersion 参数模板版本号。当**MirrorTplId**为空时，该字段必填。参数模板支持的售卖版本，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/35767) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
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
                     * 获取实例类型。当 MirrorTplId 为空值时，该参数必填。
- REPLSET：副本集实例。
- SHARD：分片实例。
- STANDALONE：单节点实例。
                     * @return ClusterType 实例类型。当 MirrorTplId 为空值时，该参数必填。
- REPLSET：副本集实例。
- SHARD：分片实例。
- STANDALONE：单节点实例。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置实例类型。当 MirrorTplId 为空值时，该参数必填。
- REPLSET：副本集实例。
- SHARD：分片实例。
- STANDALONE：单节点实例。
                     * @param _clusterType 实例类型。当 MirrorTplId 为空值时，该参数必填。
- REPLSET：副本集实例。
- SHARD：分片实例。
- STANDALONE：单节点实例。
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
                     * 获取模板参数，若不配置该参数，则以系统默认模板作为新版本参数。
                     * @return Params 模板参数，若不配置该参数，则以系统默认模板作为新版本参数。
                     * 
                     */
                    std::vector<ParamType> GetParams() const;

                    /**
                     * 设置模板参数，若不配置该参数，则以系统默认模板作为新版本参数。
                     * @param _params 模板参数，若不配置该参数，则以系统默认模板作为新版本参数。
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
                     * 获取镜像模板 ID。若指定镜像模板，则以该模板为镜像，克隆出一个新的模板。
**注意**：MirrorTplId 不为空值时，MongoVersion 及 ClusterType 将以 MirrorTpl 模板的版本及实例类型为准。
                     * @return MirrorTplId 镜像模板 ID。若指定镜像模板，则以该模板为镜像，克隆出一个新的模板。
**注意**：MirrorTplId 不为空值时，MongoVersion 及 ClusterType 将以 MirrorTpl 模板的版本及实例类型为准。
                     * 
                     */
                    std::string GetMirrorTplId() const;

                    /**
                     * 设置镜像模板 ID。若指定镜像模板，则以该模板为镜像，克隆出一个新的模板。
**注意**：MirrorTplId 不为空值时，MongoVersion 及 ClusterType 将以 MirrorTpl 模板的版本及实例类型为准。
                     * @param _mirrorTplId 镜像模板 ID。若指定镜像模板，则以该模板为镜像，克隆出一个新的模板。
**注意**：MirrorTplId 不为空值时，MongoVersion 及 ClusterType 将以 MirrorTpl 模板的版本及实例类型为准。
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
                     * 参数模板版本号。当**MirrorTplId**为空时，该字段必填。参数模板支持的售卖版本，请通过接口 [DescribeSpecInfo](https://cloud.tencent.com/document/product/240/35767) 获取。
- MONGO_36_WT：MongoDB 3.6 WiredTiger存储引擎版本，
- MONGO_40_WT：MongoDB 4.0 WiredTiger存储引擎版本，
- MONGO_42_WT：MongoDB 4.2 WiredTiger存储引擎版本。
- MONGO_44_WT：MongoDB 4.4 WiredTiger存储引擎版本。
- MONGO_50_WT：MongoDB 5.0 WiredTiger存储引擎版本。
- MONGO_60_WT：MongoDB 6.0 WiredTiger存储引擎版本。
- MONGO_70_WT：MongoDB 7.0 WiredTiger存储引擎版本。
                     */
                    std::string m_mongoVersion;
                    bool m_mongoVersionHasBeenSet;

                    /**
                     * 实例类型。当 MirrorTplId 为空值时，该参数必填。
- REPLSET：副本集实例。
- SHARD：分片实例。
- STANDALONE：单节点实例。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 模板描述信息。
                     */
                    std::string m_tplDesc;
                    bool m_tplDescHasBeenSet;

                    /**
                     * 模板参数，若不配置该参数，则以系统默认模板作为新版本参数。
                     */
                    std::vector<ParamType> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 镜像模板 ID。若指定镜像模板，则以该模板为镜像，克隆出一个新的模板。
**注意**：MirrorTplId 不为空值时，MongoVersion 及 ClusterType 将以 MirrorTpl 模板的版本及实例类型为准。
                     */
                    std::string m_mirrorTplId;
                    bool m_mirrorTplIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEDBINSTANCEPARAMTPLREQUEST_H_
