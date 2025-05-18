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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CBSVOLUME_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CBSVOLUME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EKS Instance CBS volume
                */
                class CbsVolume : public AbstractModel
                {
                public:
                    CbsVolume();
                    ~CbsVolume() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云cbs盘Id
                     * @return CbsDiskId 腾讯云cbs盘Id
                     * 
                     */
                    std::string GetCbsDiskId() const;

                    /**
                     * 设置腾讯云cbs盘Id
                     * @param _cbsDiskId 腾讯云cbs盘Id
                     * 
                     */
                    void SetCbsDiskId(const std::string& _cbsDiskId);

                    /**
                     * 判断参数 CbsDiskId 是否已赋值
                     * @return CbsDiskId 是否已赋值
                     * 
                     */
                    bool CbsDiskIdHasBeenSet() const;

                    /**
                     * 获取cbs volume 数据卷名称
                     * @return Name cbs volume 数据卷名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置cbs volume 数据卷名称
                     * @param _name cbs volume 数据卷名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 腾讯云cbs盘Id
                     */
                    std::string m_cbsDiskId;
                    bool m_cbsDiskIdHasBeenSet;

                    /**
                     * cbs volume 数据卷名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CBSVOLUME_H_
