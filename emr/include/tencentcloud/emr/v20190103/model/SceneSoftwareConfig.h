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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCENESOFTWARECONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCENESOFTWARECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 集群应用场景以及支持部署组件信息
                */
                class SceneSoftwareConfig : public AbstractModel
                {
                public:
                    SceneSoftwareConfig();
                    ~SceneSoftwareConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署的组件列表。不同的EMR产品版本ProductVersion 对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * @return Software 部署的组件列表。不同的EMR产品版本ProductVersion 对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置部署的组件列表。不同的EMR产品版本ProductVersion 对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * @param _software 部署的组件列表。不同的EMR产品版本ProductVersion 对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     * 
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取默认Hadoop-Default,[场景查询](https://cloud.tencent.com/document/product/589/14624)场景化取值范围：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * @return SceneName 默认Hadoop-Default,[场景查询](https://cloud.tencent.com/document/product/589/14624)场景化取值范围：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置默认Hadoop-Default,[场景查询](https://cloud.tencent.com/document/product/589/14624)场景化取值范围：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * @param _sceneName 默认Hadoop-Default,[场景查询](https://cloud.tencent.com/document/product/589/14624)场景化取值范围：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                private:

                    /**
                     * 部署的组件列表。不同的EMR产品版本ProductVersion 对应不同可选组件列表，不同产品版本可选组件列表查询：[组件版本](https://cloud.tencent.com/document/product/589/20279) ；
填写实例值：hive、flink。
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * 默认Hadoop-Default,[场景查询](https://cloud.tencent.com/document/product/589/14624)场景化取值范围：
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCENESOFTWARECONFIG_H_
