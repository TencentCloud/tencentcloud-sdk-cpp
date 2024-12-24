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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_GETDRUGINDICATIONSRESP_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_GETDRUGINDICATIONSRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/DocInfo.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 药品适应症响应
                */
                class GetDrugIndicationsResp : public AbstractModel
                {
                public:
                    GetDrugIndicationsResp();
                    ~GetDrugIndicationsResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取适应症
                     * @return Indications 适应症
                     * 
                     */
                    std::vector<std::string> GetIndications() const;

                    /**
                     * 设置适应症
                     * @param _indications 适应症
                     * 
                     */
                    void SetIndications(const std::vector<std::string>& _indications);

                    /**
                     * 判断参数 Indications 是否已赋值
                     * @return Indications 是否已赋值
                     * 
                     */
                    bool IndicationsHasBeenSet() const;

                    /**
                     * 获取药品说明
                     * @return DocInfos 药品说明
                     * 
                     */
                    std::vector<DocInfo> GetDocInfos() const;

                    /**
                     * 设置药品说明
                     * @param _docInfos 药品说明
                     * 
                     */
                    void SetDocInfos(const std::vector<DocInfo>& _docInfos);

                    /**
                     * 判断参数 DocInfos 是否已赋值
                     * @return DocInfos 是否已赋值
                     * 
                     */
                    bool DocInfosHasBeenSet() const;

                private:

                    /**
                     * 适应症
                     */
                    std::vector<std::string> m_indications;
                    bool m_indicationsHasBeenSet;

                    /**
                     * 药品说明
                     */
                    std::vector<DocInfo> m_docInfos;
                    bool m_docInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_GETDRUGINDICATIONSRESP_H_
