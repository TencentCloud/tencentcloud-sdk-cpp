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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_COSREGIONINFO_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_COSREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * cos地域信息
                */
                class CosRegionInfo : public AbstractModel
                {
                public:
                    CosRegionInfo();
                    ~CosRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos地域
                     * @return CosRegion cos地域
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置cos地域
                     * @param _cosRegion cos地域
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取地域描述
                     * @return CosRegionName 地域描述
                     * 
                     */
                    std::string GetCosRegionName() const;

                    /**
                     * 设置地域描述
                     * @param _cosRegionName 地域描述
                     * 
                     */
                    void SetCosRegionName(const std::string& _cosRegionName);

                    /**
                     * 判断参数 CosRegionName 是否已赋值
                     * @return CosRegionName 是否已赋值
                     * 
                     */
                    bool CosRegionNameHasBeenSet() const;

                private:

                    /**
                     * cos地域
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 地域描述
                     */
                    std::string m_cosRegionName;
                    bool m_cosRegionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_COSREGIONINFO_H_
