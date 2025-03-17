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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKMODIFYPARAMSDATA_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKMODIFYPARAMSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/BizTaskModifyInstanceParam.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 修改参数任务数据
                */
                class BizTaskModifyParamsData : public AbstractModel
                {
                public:
                    BizTaskModifyParamsData();
                    ~BizTaskModifyParamsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取集群参数修改数据
                     * @return ClusterParamList 集群参数修改数据
                     * 
                     */
                    std::vector<ModifyParamItem> GetClusterParamList() const;

                    /**
                     * 设置集群参数修改数据
                     * @param _clusterParamList 集群参数修改数据
                     * 
                     */
                    void SetClusterParamList(const std::vector<ModifyParamItem>& _clusterParamList);

                    /**
                     * 判断参数 ClusterParamList 是否已赋值
                     * @return ClusterParamList 是否已赋值
                     * 
                     */
                    bool ClusterParamListHasBeenSet() const;

                    /**
                     * 获取实例参数修改数据
                     * @return ModifyInstanceParams 实例参数修改数据
                     * 
                     */
                    std::vector<BizTaskModifyInstanceParam> GetModifyInstanceParams() const;

                    /**
                     * 设置实例参数修改数据
                     * @param _modifyInstanceParams 实例参数修改数据
                     * 
                     */
                    void SetModifyInstanceParams(const std::vector<BizTaskModifyInstanceParam>& _modifyInstanceParams);

                    /**
                     * 判断参数 ModifyInstanceParams 是否已赋值
                     * @return ModifyInstanceParams 是否已赋值
                     * 
                     */
                    bool ModifyInstanceParamsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群参数修改数据
                     */
                    std::vector<ModifyParamItem> m_clusterParamList;
                    bool m_clusterParamListHasBeenSet;

                    /**
                     * 实例参数修改数据
                     */
                    std::vector<BizTaskModifyInstanceParam> m_modifyInstanceParams;
                    bool m_modifyInstanceParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BIZTASKMODIFYPARAMSDATA_H_
