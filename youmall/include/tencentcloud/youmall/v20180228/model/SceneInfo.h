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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_SCENEINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_SCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 场景图信息
                */
                class SceneInfo : public AbstractModel
                {
                public:
                    SceneInfo();
                    ~SceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景图
                     * @return ScenePictureURL 场景图
                     * 
                     */
                    std::string GetScenePictureURL() const;

                    /**
                     * 设置场景图
                     * @param _scenePictureURL 场景图
                     * 
                     */
                    void SetScenePictureURL(const std::string& _scenePictureURL);

                    /**
                     * 判断参数 ScenePictureURL 是否已赋值
                     * @return ScenePictureURL 是否已赋值
                     * 
                     */
                    bool ScenePictureURLHasBeenSet() const;

                    /**
                     * 获取抓拍头像左上角X坐标在场景图中的像素点位置
                     * @return HeadX 抓拍头像左上角X坐标在场景图中的像素点位置
                     * 
                     */
                    int64_t GetHeadX() const;

                    /**
                     * 设置抓拍头像左上角X坐标在场景图中的像素点位置
                     * @param _headX 抓拍头像左上角X坐标在场景图中的像素点位置
                     * 
                     */
                    void SetHeadX(const int64_t& _headX);

                    /**
                     * 判断参数 HeadX 是否已赋值
                     * @return HeadX 是否已赋值
                     * 
                     */
                    bool HeadXHasBeenSet() const;

                    /**
                     * 获取抓拍头像左上角Y坐标在场景图中的像素点位置
                     * @return HeadY 抓拍头像左上角Y坐标在场景图中的像素点位置
                     * 
                     */
                    int64_t GetHeadY() const;

                    /**
                     * 设置抓拍头像左上角Y坐标在场景图中的像素点位置
                     * @param _headY 抓拍头像左上角Y坐标在场景图中的像素点位置
                     * 
                     */
                    void SetHeadY(const int64_t& _headY);

                    /**
                     * 判断参数 HeadY 是否已赋值
                     * @return HeadY 是否已赋值
                     * 
                     */
                    bool HeadYHasBeenSet() const;

                    /**
                     * 获取抓拍头像在场景图中占有的像素宽度
                     * @return HeadWidth 抓拍头像在场景图中占有的像素宽度
                     * 
                     */
                    int64_t GetHeadWidth() const;

                    /**
                     * 设置抓拍头像在场景图中占有的像素宽度
                     * @param _headWidth 抓拍头像在场景图中占有的像素宽度
                     * 
                     */
                    void SetHeadWidth(const int64_t& _headWidth);

                    /**
                     * 判断参数 HeadWidth 是否已赋值
                     * @return HeadWidth 是否已赋值
                     * 
                     */
                    bool HeadWidthHasBeenSet() const;

                    /**
                     * 获取抓拍头像在场景图中占有的像素高度
                     * @return HeadHeight 抓拍头像在场景图中占有的像素高度
                     * 
                     */
                    int64_t GetHeadHeight() const;

                    /**
                     * 设置抓拍头像在场景图中占有的像素高度
                     * @param _headHeight 抓拍头像在场景图中占有的像素高度
                     * 
                     */
                    void SetHeadHeight(const int64_t& _headHeight);

                    /**
                     * 判断参数 HeadHeight 是否已赋值
                     * @return HeadHeight 是否已赋值
                     * 
                     */
                    bool HeadHeightHasBeenSet() const;

                private:

                    /**
                     * 场景图
                     */
                    std::string m_scenePictureURL;
                    bool m_scenePictureURLHasBeenSet;

                    /**
                     * 抓拍头像左上角X坐标在场景图中的像素点位置
                     */
                    int64_t m_headX;
                    bool m_headXHasBeenSet;

                    /**
                     * 抓拍头像左上角Y坐标在场景图中的像素点位置
                     */
                    int64_t m_headY;
                    bool m_headYHasBeenSet;

                    /**
                     * 抓拍头像在场景图中占有的像素宽度
                     */
                    int64_t m_headWidth;
                    bool m_headWidthHasBeenSet;

                    /**
                     * 抓拍头像在场景图中占有的像素高度
                     */
                    int64_t m_headHeight;
                    bool m_headHeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_SCENEINFO_H_
