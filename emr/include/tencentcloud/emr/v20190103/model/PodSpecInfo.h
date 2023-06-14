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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODSPECINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODSPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PodNewSpec.h>
#include <tencentcloud/emr/v20190103/model/PodNewParameter.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod相关信息
                */
                class PodSpecInfo : public AbstractModel
                {
                public:
                    PodSpecInfo();
                    ~PodSpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用Pod资源扩容时，指定的Pod规格以及来源等信息
                     * @return PodSpec 使用Pod资源扩容时，指定的Pod规格以及来源等信息
                     * 
                     */
                    PodNewSpec GetPodSpec() const;

                    /**
                     * 设置使用Pod资源扩容时，指定的Pod规格以及来源等信息
                     * @param _podSpec 使用Pod资源扩容时，指定的Pod规格以及来源等信息
                     * 
                     */
                    void SetPodSpec(const PodNewSpec& _podSpec);

                    /**
                     * 判断参数 PodSpec 是否已赋值
                     * @return PodSpec 是否已赋值
                     * 
                     */
                    bool PodSpecHasBeenSet() const;

                    /**
                     * 获取POD自定义权限和自定义参数
                     * @return PodParameter POD自定义权限和自定义参数
                     * 
                     */
                    PodNewParameter GetPodParameter() const;

                    /**
                     * 设置POD自定义权限和自定义参数
                     * @param _podParameter POD自定义权限和自定义参数
                     * 
                     */
                    void SetPodParameter(const PodNewParameter& _podParameter);

                    /**
                     * 判断参数 PodParameter 是否已赋值
                     * @return PodParameter 是否已赋值
                     * 
                     */
                    bool PodParameterHasBeenSet() const;

                private:

                    /**
                     * 使用Pod资源扩容时，指定的Pod规格以及来源等信息
                     */
                    PodNewSpec m_podSpec;
                    bool m_podSpecHasBeenSet;

                    /**
                     * POD自定义权限和自定义参数
                     */
                    PodNewParameter m_podParameter;
                    bool m_podParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODSPECINFO_H_
