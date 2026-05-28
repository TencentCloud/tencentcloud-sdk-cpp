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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_HIGHLIGHTWORDINFO_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_HIGHLIGHTWORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * 高亮词信息
                */
                class HighlightWordInfo : public AbstractModel
                {
                public:
                    HighlightWordInfo();
                    ~HighlightWordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取类型 1:疾病，2:检验/检查，3:药品，4:科室，5:自定义配置
                     * @return Type 类型 1:疾病，2:检验/检查，3:药品，4:科室，5:自定义配置
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置类型 1:疾病，2:检验/检查，3:药品，4:科室，5:自定义配置
                     * @param _type 类型 1:疾病，2:检验/检查，3:药品，4:科室，5:自定义配置
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取跳转类型 h5:h5类型，mini_wx:微信小程序
                     * @return JumpType 跳转类型 h5:h5类型，mini_wx:微信小程序
                     * 
                     */
                    std::string GetJumpType() const;

                    /**
                     * 设置跳转类型 h5:h5类型，mini_wx:微信小程序
                     * @param _jumpType 跳转类型 h5:h5类型，mini_wx:微信小程序
                     * 
                     */
                    void SetJumpType(const std::string& _jumpType);

                    /**
                     * 判断参数 JumpType 是否已赋值
                     * @return JumpType 是否已赋值
                     * 
                     */
                    bool JumpTypeHasBeenSet() const;

                    /**
                     * 获取跳转URL
                     * @return JumpUrl 跳转URL
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置跳转URL
                     * @param _jumpUrl 跳转URL
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取跳转小程序Appid
                     * @return JumpAppid 跳转小程序Appid
                     * 
                     */
                    std::string GetJumpAppid() const;

                    /**
                     * 设置跳转小程序Appid
                     * @param _jumpAppid 跳转小程序Appid
                     * 
                     */
                    void SetJumpAppid(const std::string& _jumpAppid);

                    /**
                     * 判断参数 JumpAppid 是否已赋值
                     * @return JumpAppid 是否已赋值
                     * 
                     */
                    bool JumpAppidHasBeenSet() const;

                    /**
                     * 获取跳转小程序原始ID
                     * @return JumpOriginId 跳转小程序原始ID
                     * 
                     */
                    std::string GetJumpOriginId() const;

                    /**
                     * 设置跳转小程序原始ID
                     * @param _jumpOriginId 跳转小程序原始ID
                     * 
                     */
                    void SetJumpOriginId(const std::string& _jumpOriginId);

                    /**
                     * 判断参数 JumpOriginId 是否已赋值
                     * @return JumpOriginId 是否已赋值
                     * 
                     */
                    bool JumpOriginIdHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型 1:疾病，2:检验/检查，3:药品，4:科室，5:自定义配置
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 跳转类型 h5:h5类型，mini_wx:微信小程序
                     */
                    std::string m_jumpType;
                    bool m_jumpTypeHasBeenSet;

                    /**
                     * 跳转URL
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 跳转小程序Appid
                     */
                    std::string m_jumpAppid;
                    bool m_jumpAppidHasBeenSet;

                    /**
                     * 跳转小程序原始ID
                     */
                    std::string m_jumpOriginId;
                    bool m_jumpOriginIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_HIGHLIGHTWORDINFO_H_
