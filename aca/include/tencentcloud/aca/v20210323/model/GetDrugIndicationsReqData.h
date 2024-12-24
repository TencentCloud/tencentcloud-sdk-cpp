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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_GETDRUGINDICATIONSREQDATA_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_GETDRUGINDICATIONSREQDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/IndicationsDrug.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 获取适应症请求
                */
                class GetDrugIndicationsReqData : public AbstractModel
                {
                public:
                    GetDrugIndicationsReqData();
                    ~GetDrugIndicationsReqData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询药品列表
                     * @return Drugs 查询药品列表
                     * 
                     */
                    std::vector<IndicationsDrug> GetDrugs() const;

                    /**
                     * 设置查询药品列表
                     * @param _drugs 查询药品列表
                     * 
                     */
                    void SetDrugs(const std::vector<IndicationsDrug>& _drugs);

                    /**
                     * 判断参数 Drugs 是否已赋值
                     * @return Drugs 是否已赋值
                     * 
                     */
                    bool DrugsHasBeenSet() const;

                private:

                    /**
                     * 查询药品列表
                     */
                    std::vector<IndicationsDrug> m_drugs;
                    bool m_drugsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_GETDRUGINDICATIONSREQDATA_H_
