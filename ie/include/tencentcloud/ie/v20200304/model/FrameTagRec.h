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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGREC_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGREC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 帧标签任务参数
                */
                class FrameTagRec : public AbstractModel
                {
                public:
                    FrameTagRec();
                    ~FrameTagRec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签类型：
"Common": 通用类型
"Game":游戏类型
                     * @return TagType 标签类型：
"Common": 通用类型
"Game":游戏类型
                     * 
                     */
                    std::string GetTagType() const;

                    /**
                     * 设置标签类型：
"Common": 通用类型
"Game":游戏类型
                     * @param _tagType 标签类型：
"Common": 通用类型
"Game":游戏类型
                     * 
                     */
                    void SetTagType(const std::string& _tagType);

                    /**
                     * 判断参数 TagType 是否已赋值
                     * @return TagType 是否已赋值
                     * 
                     */
                    bool TagTypeHasBeenSet() const;

                    /**
                     * 获取游戏具体类型:
"HonorOfKings_AnchorViews":王者荣耀主播视角
"HonorOfKings_GameViews":王者荣耀比赛视角
"LOL_AnchorViews":英雄联盟主播视角
"LOL_GameViews":英雄联盟比赛视角
"PUBG_AnchorViews":和平精英主播视角
"PUBG_GameViews":和平精英比赛视角
                     * @return GameExtendType 游戏具体类型:
"HonorOfKings_AnchorViews":王者荣耀主播视角
"HonorOfKings_GameViews":王者荣耀比赛视角
"LOL_AnchorViews":英雄联盟主播视角
"LOL_GameViews":英雄联盟比赛视角
"PUBG_AnchorViews":和平精英主播视角
"PUBG_GameViews":和平精英比赛视角
                     * 
                     */
                    std::string GetGameExtendType() const;

                    /**
                     * 设置游戏具体类型:
"HonorOfKings_AnchorViews":王者荣耀主播视角
"HonorOfKings_GameViews":王者荣耀比赛视角
"LOL_AnchorViews":英雄联盟主播视角
"LOL_GameViews":英雄联盟比赛视角
"PUBG_AnchorViews":和平精英主播视角
"PUBG_GameViews":和平精英比赛视角
                     * @param _gameExtendType 游戏具体类型:
"HonorOfKings_AnchorViews":王者荣耀主播视角
"HonorOfKings_GameViews":王者荣耀比赛视角
"LOL_AnchorViews":英雄联盟主播视角
"LOL_GameViews":英雄联盟比赛视角
"PUBG_AnchorViews":和平精英主播视角
"PUBG_GameViews":和平精英比赛视角
                     * 
                     */
                    void SetGameExtendType(const std::string& _gameExtendType);

                    /**
                     * 判断参数 GameExtendType 是否已赋值
                     * @return GameExtendType 是否已赋值
                     * 
                     */
                    bool GameExtendTypeHasBeenSet() const;

                private:

                    /**
                     * 标签类型：
"Common": 通用类型
"Game":游戏类型
                     */
                    std::string m_tagType;
                    bool m_tagTypeHasBeenSet;

                    /**
                     * 游戏具体类型:
"HonorOfKings_AnchorViews":王者荣耀主播视角
"HonorOfKings_GameViews":王者荣耀比赛视角
"LOL_AnchorViews":英雄联盟主播视角
"LOL_GameViews":英雄联盟比赛视角
"PUBG_AnchorViews":和平精英主播视角
"PUBG_GameViews":和平精英比赛视角
                     */
                    std::string m_gameExtendType;
                    bool m_gameExtendTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGREC_H_
