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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESSAICHANNELREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESSAICHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SSAIConf.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageSSAIChannel请求参数结构体
                */
                class ModifyStreamPackageSSAIChannelRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageSSAIChannelRequest();
                    ~ModifyStreamPackageSSAIChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取广告插入配置名称，全局唯一，不能与其他频道重复。
                     * @return Name 广告插入配置名称，全局唯一，不能与其他频道重复。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置广告插入配置名称，全局唯一，不能与其他频道重复。
                     * @param _name 广告插入配置名称，全局唯一，不能与其他频道重复。
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
                     * 获取通配广告源地址。
                     * @return ContentSource 通配广告源地址。
                     * 
                     */
                    std::string GetContentSource() const;

                    /**
                     * 设置通配广告源地址。
                     * @param _contentSource 通配广告源地址。
                     * 
                     */
                    void SetContentSource(const std::string& _contentSource);

                    /**
                     * 判断参数 ContentSource 是否已赋值
                     * @return ContentSource 是否已赋值
                     * 
                     */
                    bool ContentSourceHasBeenSet() const;

                    /**
                     * 获取广告插入配置信息。
                     * @return SSAIInfo 广告插入配置信息。
                     * 
                     */
                    SSAIConf GetSSAIInfo() const;

                    /**
                     * 设置广告插入配置信息。
                     * @param _sSAIInfo 广告插入配置信息。
                     * 
                     */
                    void SetSSAIInfo(const SSAIConf& _sSAIInfo);

                    /**
                     * 判断参数 SSAIInfo 是否已赋值
                     * @return SSAIInfo 是否已赋值
                     * 
                     */
                    bool SSAIInfoHasBeenSet() const;

                    /**
                     * 获取广告插入配置ID。
                     * @return ID 广告插入配置ID。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置广告插入配置ID。
                     * @param _iD 广告插入配置ID。
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 广告插入配置名称，全局唯一，不能与其他频道重复。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 通配广告源地址。
                     */
                    std::string m_contentSource;
                    bool m_contentSourceHasBeenSet;

                    /**
                     * 广告插入配置信息。
                     */
                    SSAIConf m_sSAIInfo;
                    bool m_sSAIInfoHasBeenSet;

                    /**
                     * 广告插入配置ID。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGESSAICHANNELREQUEST_H_
