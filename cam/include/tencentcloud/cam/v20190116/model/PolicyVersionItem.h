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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONITEM_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * 策略版本列表元素结构
                */
                class PolicyVersionItem : public AbstractModel
                {
                public:
                    PolicyVersionItem();
                    ~PolicyVersionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略版本号
                     * @return VersionId 策略版本号
                     * 
                     */
                    uint64_t GetVersionId() const;

                    /**
                     * 设置策略版本号
                     * @param _versionId 策略版本号
                     * 
                     */
                    void SetVersionId(const uint64_t& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取策略版本创建时间
                     * @return CreateDate 策略版本创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置策略版本创建时间
                     * @param _createDate 策略版本创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取是否是正在生效的版本。0表示不是，1表示是
                     * @return IsDefaultVersion 是否是正在生效的版本。0表示不是，1表示是
                     * 
                     */
                    int64_t GetIsDefaultVersion() const;

                    /**
                     * 设置是否是正在生效的版本。0表示不是，1表示是
                     * @param _isDefaultVersion 是否是正在生效的版本。0表示不是，1表示是
                     * 
                     */
                    void SetIsDefaultVersion(const int64_t& _isDefaultVersion);

                    /**
                     * 判断参数 IsDefaultVersion 是否已赋值
                     * @return IsDefaultVersion 是否已赋值
                     * 
                     */
                    bool IsDefaultVersionHasBeenSet() const;

                private:

                    /**
                     * 策略版本号
                     */
                    uint64_t m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 策略版本创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 是否是正在生效的版本。0表示不是，1表示是
                     */
                    int64_t m_isDefaultVersion;
                    bool m_isDefaultVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_POLICYVERSIONITEM_H_
