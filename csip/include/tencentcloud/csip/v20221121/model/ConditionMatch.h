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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONDITIONMATCH_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONDITIONMATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 高级镜像条件匹配（三个匹配串有且仅有一个非空）
                */
                class ConditionMatch : public AbstractModel
                {
                public:
                    ConditionMatch();
                    ~ConditionMatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像ID匹配串（三选一，有且仅有一个非空）</p>
                     * @return ImageIDMatchString <p>镜像ID匹配串（三选一，有且仅有一个非空）</p>
                     * 
                     */
                    std::string GetImageIDMatchString() const;

                    /**
                     * 设置<p>镜像ID匹配串（三选一，有且仅有一个非空）</p>
                     * @param _imageIDMatchString <p>镜像ID匹配串（三选一，有且仅有一个非空）</p>
                     * 
                     */
                    void SetImageIDMatchString(const std::string& _imageIDMatchString);

                    /**
                     * 判断参数 ImageIDMatchString 是否已赋值
                     * @return ImageIDMatchString 是否已赋值
                     * 
                     */
                    bool ImageIDMatchStringHasBeenSet() const;

                    /**
                     * 获取<p>镜像名匹配串（三选一，有且仅有一个非空）</p>
                     * @return ImageNameMatchString <p>镜像名匹配串（三选一，有且仅有一个非空）</p>
                     * 
                     */
                    std::string GetImageNameMatchString() const;

                    /**
                     * 设置<p>镜像名匹配串（三选一，有且仅有一个非空）</p>
                     * @param _imageNameMatchString <p>镜像名匹配串（三选一，有且仅有一个非空）</p>
                     * 
                     */
                    void SetImageNameMatchString(const std::string& _imageNameMatchString);

                    /**
                     * 判断参数 ImageNameMatchString 是否已赋值
                     * @return ImageNameMatchString 是否已赋值
                     * 
                     */
                    bool ImageNameMatchStringHasBeenSet() const;

                    /**
                     * 获取<p>镜像地址匹配串（三选一，有且仅有一个非空）</p>
                     * @return ImageAddressMatchString <p>镜像地址匹配串（三选一，有且仅有一个非空）</p>
                     * 
                     */
                    std::string GetImageAddressMatchString() const;

                    /**
                     * 设置<p>镜像地址匹配串（三选一，有且仅有一个非空）</p>
                     * @param _imageAddressMatchString <p>镜像地址匹配串（三选一，有且仅有一个非空）</p>
                     * 
                     */
                    void SetImageAddressMatchString(const std::string& _imageAddressMatchString);

                    /**
                     * 判断参数 ImageAddressMatchString 是否已赋值
                     * @return ImageAddressMatchString 是否已赋值
                     * 
                     */
                    bool ImageAddressMatchStringHasBeenSet() const;

                    /**
                     * 获取<p>匹配条件，取值：EQUALS-等于/NOT_EQUALS-不等于/STARTS_WITH-以…开头/NOT_STARTS_WITH-不以…开头/ENDS_WITH-以…结尾/NOT_ENDS_WITH-不以…结尾/CONTAINS-包含/NOT_CONTAINS-不包含</p>
                     * @return MatchType <p>匹配条件，取值：EQUALS-等于/NOT_EQUALS-不等于/STARTS_WITH-以…开头/NOT_STARTS_WITH-不以…开头/ENDS_WITH-以…结尾/NOT_ENDS_WITH-不以…结尾/CONTAINS-包含/NOT_CONTAINS-不包含</p>
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置<p>匹配条件，取值：EQUALS-等于/NOT_EQUALS-不等于/STARTS_WITH-以…开头/NOT_STARTS_WITH-不以…开头/ENDS_WITH-以…结尾/NOT_ENDS_WITH-不以…结尾/CONTAINS-包含/NOT_CONTAINS-不包含</p>
                     * @param _matchType <p>匹配条件，取值：EQUALS-等于/NOT_EQUALS-不等于/STARTS_WITH-以…开头/NOT_STARTS_WITH-不以…开头/ENDS_WITH-以…结尾/NOT_ENDS_WITH-不以…结尾/CONTAINS-包含/NOT_CONTAINS-不包含</p>
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                private:

                    /**
                     * <p>镜像ID匹配串（三选一，有且仅有一个非空）</p>
                     */
                    std::string m_imageIDMatchString;
                    bool m_imageIDMatchStringHasBeenSet;

                    /**
                     * <p>镜像名匹配串（三选一，有且仅有一个非空）</p>
                     */
                    std::string m_imageNameMatchString;
                    bool m_imageNameMatchStringHasBeenSet;

                    /**
                     * <p>镜像地址匹配串（三选一，有且仅有一个非空）</p>
                     */
                    std::string m_imageAddressMatchString;
                    bool m_imageAddressMatchStringHasBeenSet;

                    /**
                     * <p>匹配条件，取值：EQUALS-等于/NOT_EQUALS-不等于/STARTS_WITH-以…开头/NOT_STARTS_WITH-不以…开头/ENDS_WITH-以…结尾/NOT_ENDS_WITH-不以…结尾/CONTAINS-包含/NOT_CONTAINS-不包含</p>
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONDITIONMATCH_H_
