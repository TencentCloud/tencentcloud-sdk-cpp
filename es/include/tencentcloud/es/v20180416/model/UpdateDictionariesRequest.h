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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDICTIONARIESREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDICTIONARIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateDictionaries请求参数结构体
                */
                class UpdateDictionariesRequest : public AbstractModel
                {
                public:
                    UpdateDictionariesRequest();
                    ~UpdateDictionariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES实例ID
                     * @return InstanceId ES实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES实例ID
                     * @param _instanceId ES实例ID
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
                     * 获取安装时填IK分词主词典COS地址，删除时填词典名如test.dic
                     * @return IkMainDicts 安装时填IK分词主词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    std::vector<std::string> GetIkMainDicts() const;

                    /**
                     * 设置安装时填IK分词主词典COS地址，删除时填词典名如test.dic
                     * @param _ikMainDicts 安装时填IK分词主词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    void SetIkMainDicts(const std::vector<std::string>& _ikMainDicts);

                    /**
                     * 判断参数 IkMainDicts 是否已赋值
                     * @return IkMainDicts 是否已赋值
                     * 
                     */
                    bool IkMainDictsHasBeenSet() const;

                    /**
                     * 获取安装时填IK分词停用词词典COS地址，删除时填词典名如test.dic
                     * @return IkStopwords 安装时填IK分词停用词词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    std::vector<std::string> GetIkStopwords() const;

                    /**
                     * 设置安装时填IK分词停用词词典COS地址，删除时填词典名如test.dic
                     * @param _ikStopwords 安装时填IK分词停用词词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    void SetIkStopwords(const std::vector<std::string>& _ikStopwords);

                    /**
                     * 判断参数 IkStopwords 是否已赋值
                     * @return IkStopwords 是否已赋值
                     * 
                     */
                    bool IkStopwordsHasBeenSet() const;

                    /**
                     * 获取安装时填同义词词典COS地址，删除时填词典名如test.dic
                     * @return Synonym 安装时填同义词词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    std::vector<std::string> GetSynonym() const;

                    /**
                     * 设置安装时填同义词词典COS地址，删除时填词典名如test.dic
                     * @param _synonym 安装时填同义词词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    void SetSynonym(const std::vector<std::string>& _synonym);

                    /**
                     * 判断参数 Synonym 是否已赋值
                     * @return Synonym 是否已赋值
                     * 
                     */
                    bool SynonymHasBeenSet() const;

                    /**
                     * 获取安装时填QQ分词词典COS地址，删除时填词典名如test.dic
                     * @return QQDict 安装时填QQ分词词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    std::vector<std::string> GetQQDict() const;

                    /**
                     * 设置安装时填QQ分词词典COS地址，删除时填词典名如test.dic
                     * @param _qQDict 安装时填QQ分词词典COS地址，删除时填词典名如test.dic
                     * 
                     */
                    void SetQQDict(const std::vector<std::string>& _qQDict);

                    /**
                     * 判断参数 QQDict 是否已赋值
                     * @return QQDict 是否已赋值
                     * 
                     */
                    bool QQDictHasBeenSet() const;

                    /**
                     * 获取0：安装；1：删除。默认值0
                     * @return UpdateType 0：安装；1：删除。默认值0
                     * 
                     */
                    int64_t GetUpdateType() const;

                    /**
                     * 设置0：安装；1：删除。默认值0
                     * @param _updateType 0：安装；1：删除。默认值0
                     * 
                     */
                    void SetUpdateType(const int64_t& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取是否强制重启集群。默认值false
                     * @return ForceRestart 是否强制重启集群。默认值false
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置是否强制重启集群。默认值false
                     * @param _forceRestart 是否强制重启集群。默认值false
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                private:

                    /**
                     * ES实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 安装时填IK分词主词典COS地址，删除时填词典名如test.dic
                     */
                    std::vector<std::string> m_ikMainDicts;
                    bool m_ikMainDictsHasBeenSet;

                    /**
                     * 安装时填IK分词停用词词典COS地址，删除时填词典名如test.dic
                     */
                    std::vector<std::string> m_ikStopwords;
                    bool m_ikStopwordsHasBeenSet;

                    /**
                     * 安装时填同义词词典COS地址，删除时填词典名如test.dic
                     */
                    std::vector<std::string> m_synonym;
                    bool m_synonymHasBeenSet;

                    /**
                     * 安装时填QQ分词词典COS地址，删除时填词典名如test.dic
                     */
                    std::vector<std::string> m_qQDict;
                    bool m_qQDictHasBeenSet;

                    /**
                     * 0：安装；1：删除。默认值0
                     */
                    int64_t m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 是否强制重启集群。默认值false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEDICTIONARIESREQUEST_H_
