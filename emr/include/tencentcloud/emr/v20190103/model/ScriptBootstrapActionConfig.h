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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCRIPTBOOTSTRAPACTIONCONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCRIPTBOOTSTRAPACTIONCONFIG_H_

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
                * 添加引导操作
                */
                class ScriptBootstrapActionConfig : public AbstractModel
                {
                public:
                    ScriptBootstrapActionConfig();
                    ~ScriptBootstrapActionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本的cos地址，参照格式：https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh查询cos存储桶列表：[存储桶列表](https://console.cloud.tencent.com/cos/bucket)
                     * @return CosFileURI 脚本的cos地址，参照格式：https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh查询cos存储桶列表：[存储桶列表](https://console.cloud.tencent.com/cos/bucket)
                     * 
                     */
                    std::string GetCosFileURI() const;

                    /**
                     * 设置脚本的cos地址，参照格式：https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh查询cos存储桶列表：[存储桶列表](https://console.cloud.tencent.com/cos/bucket)
                     * @param _cosFileURI 脚本的cos地址，参照格式：https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh查询cos存储桶列表：[存储桶列表](https://console.cloud.tencent.com/cos/bucket)
                     * 
                     */
                    void SetCosFileURI(const std::string& _cosFileURI);

                    /**
                     * 判断参数 CosFileURI 是否已赋值
                     * @return CosFileURI 是否已赋值
                     * 
                     */
                    bool CosFileURIHasBeenSet() const;

                    /**
                     * 获取引导脚步执行时机范围
<li>resourceAfter：节点初始化后</li>
<li>clusterAfter：集群启动后</li>
<li>clusterBefore：集群启动前</li>
                     * @return ExecutionMoment 引导脚步执行时机范围
<li>resourceAfter：节点初始化后</li>
<li>clusterAfter：集群启动后</li>
<li>clusterBefore：集群启动前</li>
                     * 
                     */
                    std::string GetExecutionMoment() const;

                    /**
                     * 设置引导脚步执行时机范围
<li>resourceAfter：节点初始化后</li>
<li>clusterAfter：集群启动后</li>
<li>clusterBefore：集群启动前</li>
                     * @param _executionMoment 引导脚步执行时机范围
<li>resourceAfter：节点初始化后</li>
<li>clusterAfter：集群启动后</li>
<li>clusterBefore：集群启动前</li>
                     * 
                     */
                    void SetExecutionMoment(const std::string& _executionMoment);

                    /**
                     * 判断参数 ExecutionMoment 是否已赋值
                     * @return ExecutionMoment 是否已赋值
                     * 
                     */
                    bool ExecutionMomentHasBeenSet() const;

                    /**
                     * 获取执行脚本参数，参数格式请遵循标准Shell规范
                     * @return Args 执行脚本参数，参数格式请遵循标准Shell规范
                     * 
                     */
                    std::vector<std::string> GetArgs() const;

                    /**
                     * 设置执行脚本参数，参数格式请遵循标准Shell规范
                     * @param _args 执行脚本参数，参数格式请遵循标准Shell规范
                     * 
                     */
                    void SetArgs(const std::vector<std::string>& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                    /**
                     * 获取脚本文件名
                     * @return CosFileName 脚本文件名
                     * 
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置脚本文件名
                     * @param _cosFileName 脚本文件名
                     * 
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     * 
                     */
                    bool CosFileNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 脚本的cos地址，参照格式：https://beijing-111111.cos.ap-beijing.myqcloud.com/data/test.sh查询cos存储桶列表：[存储桶列表](https://console.cloud.tencent.com/cos/bucket)
                     */
                    std::string m_cosFileURI;
                    bool m_cosFileURIHasBeenSet;

                    /**
                     * 引导脚步执行时机范围
<li>resourceAfter：节点初始化后</li>
<li>clusterAfter：集群启动后</li>
<li>clusterBefore：集群启动前</li>
                     */
                    std::string m_executionMoment;
                    bool m_executionMomentHasBeenSet;

                    /**
                     * 执行脚本参数，参数格式请遵循标准Shell规范
                     */
                    std::vector<std::string> m_args;
                    bool m_argsHasBeenSet;

                    /**
                     * 脚本文件名
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCRIPTBOOTSTRAPACTIONCONFIG_H_
