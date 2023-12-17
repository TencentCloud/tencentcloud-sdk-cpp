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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TARGETDESCRIPTION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TARGETDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/SCFParams.h>
#include <tencentcloud/eb/v20210416/model/CkafkaTargetParams.h>
#include <tencentcloud/eb/v20210416/model/ESTargetParams.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * TargetDescription描述
                */
                class TargetDescription : public AbstractModel
                {
                public:
                    TargetDescription();
                    ~TargetDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取QCS资源六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)；scf资源六段式示例[qcs::scf:ap-guangzhou:uin/123:namespace/test(函数命名空间)/function/test(函数名)/$LATEST(函数版本)] amp资源六段式示例[qcs::eb-amp:ap-guangzhou:uin/123:] ckafka资源六段式示例[qcs::ckafka:ap-guangzhou:uin/123:ckafkaId/uin/123/ckafka-123(ckafka实例Id)] cls资源六段式示例[qcs::cls:ap-guangzhou:uin/123:topic/122332442(topicId)] es资源六段式示例[qcs::es:ap-guangzhou:appid/123/uin/456:instance/es-7cplmhsd(es实例Id)]
                     * @return ResourceDescription QCS资源六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)；scf资源六段式示例[qcs::scf:ap-guangzhou:uin/123:namespace/test(函数命名空间)/function/test(函数名)/$LATEST(函数版本)] amp资源六段式示例[qcs::eb-amp:ap-guangzhou:uin/123:] ckafka资源六段式示例[qcs::ckafka:ap-guangzhou:uin/123:ckafkaId/uin/123/ckafka-123(ckafka实例Id)] cls资源六段式示例[qcs::cls:ap-guangzhou:uin/123:topic/122332442(topicId)] es资源六段式示例[qcs::es:ap-guangzhou:appid/123/uin/456:instance/es-7cplmhsd(es实例Id)]
                     * 
                     */
                    std::string GetResourceDescription() const;

                    /**
                     * 设置QCS资源六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)；scf资源六段式示例[qcs::scf:ap-guangzhou:uin/123:namespace/test(函数命名空间)/function/test(函数名)/$LATEST(函数版本)] amp资源六段式示例[qcs::eb-amp:ap-guangzhou:uin/123:] ckafka资源六段式示例[qcs::ckafka:ap-guangzhou:uin/123:ckafkaId/uin/123/ckafka-123(ckafka实例Id)] cls资源六段式示例[qcs::cls:ap-guangzhou:uin/123:topic/122332442(topicId)] es资源六段式示例[qcs::es:ap-guangzhou:appid/123/uin/456:instance/es-7cplmhsd(es实例Id)]
                     * @param _resourceDescription QCS资源六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)；scf资源六段式示例[qcs::scf:ap-guangzhou:uin/123:namespace/test(函数命名空间)/function/test(函数名)/$LATEST(函数版本)] amp资源六段式示例[qcs::eb-amp:ap-guangzhou:uin/123:] ckafka资源六段式示例[qcs::ckafka:ap-guangzhou:uin/123:ckafkaId/uin/123/ckafka-123(ckafka实例Id)] cls资源六段式示例[qcs::cls:ap-guangzhou:uin/123:topic/122332442(topicId)] es资源六段式示例[qcs::es:ap-guangzhou:appid/123/uin/456:instance/es-7cplmhsd(es实例Id)]
                     * 
                     */
                    void SetResourceDescription(const std::string& _resourceDescription);

                    /**
                     * 判断参数 ResourceDescription 是否已赋值
                     * @return ResourceDescription 是否已赋值
                     * 
                     */
                    bool ResourceDescriptionHasBeenSet() const;

                    /**
                     * 获取云函数参数
                     * @return SCFParams 云函数参数
                     * 
                     */
                    SCFParams GetSCFParams() const;

                    /**
                     * 设置云函数参数
                     * @param _sCFParams 云函数参数
                     * 
                     */
                    void SetSCFParams(const SCFParams& _sCFParams);

                    /**
                     * 判断参数 SCFParams 是否已赋值
                     * @return SCFParams 是否已赋值
                     * 
                     */
                    bool SCFParamsHasBeenSet() const;

                    /**
                     * 获取Ckafka参数
                     * @return CkafkaTargetParams Ckafka参数
                     * 
                     */
                    CkafkaTargetParams GetCkafkaTargetParams() const;

                    /**
                     * 设置Ckafka参数
                     * @param _ckafkaTargetParams Ckafka参数
                     * 
                     */
                    void SetCkafkaTargetParams(const CkafkaTargetParams& _ckafkaTargetParams);

                    /**
                     * 判断参数 CkafkaTargetParams 是否已赋值
                     * @return CkafkaTargetParams 是否已赋值
                     * 
                     */
                    bool CkafkaTargetParamsHasBeenSet() const;

                    /**
                     * 获取ElasticSearch参数
                     * @return ESTargetParams ElasticSearch参数
                     * 
                     */
                    ESTargetParams GetESTargetParams() const;

                    /**
                     * 设置ElasticSearch参数
                     * @param _eSTargetParams ElasticSearch参数
                     * 
                     */
                    void SetESTargetParams(const ESTargetParams& _eSTargetParams);

                    /**
                     * 判断参数 ESTargetParams 是否已赋值
                     * @return ESTargetParams 是否已赋值
                     * 
                     */
                    bool ESTargetParamsHasBeenSet() const;

                private:

                    /**
                     * QCS资源六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)；scf资源六段式示例[qcs::scf:ap-guangzhou:uin/123:namespace/test(函数命名空间)/function/test(函数名)/$LATEST(函数版本)] amp资源六段式示例[qcs::eb-amp:ap-guangzhou:uin/123:] ckafka资源六段式示例[qcs::ckafka:ap-guangzhou:uin/123:ckafkaId/uin/123/ckafka-123(ckafka实例Id)] cls资源六段式示例[qcs::cls:ap-guangzhou:uin/123:topic/122332442(topicId)] es资源六段式示例[qcs::es:ap-guangzhou:appid/123/uin/456:instance/es-7cplmhsd(es实例Id)]
                     */
                    std::string m_resourceDescription;
                    bool m_resourceDescriptionHasBeenSet;

                    /**
                     * 云函数参数
                     */
                    SCFParams m_sCFParams;
                    bool m_sCFParamsHasBeenSet;

                    /**
                     * Ckafka参数
                     */
                    CkafkaTargetParams m_ckafkaTargetParams;
                    bool m_ckafkaTargetParamsHasBeenSet;

                    /**
                     * ElasticSearch参数
                     */
                    ESTargetParams m_eSTargetParams;
                    bool m_eSTargetParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TARGETDESCRIPTION_H_
