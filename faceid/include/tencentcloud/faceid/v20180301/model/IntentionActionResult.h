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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/IntentionActionResultDetail.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 意愿核身点头确认模式结果
                */
                class IntentionActionResult : public AbstractModel
                {
                public:
                    IntentionActionResult();
                    ~IntentionActionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿核身错误码：
0: "成功"       
-1: "参数错误"    
-2: "系统异常"    
-101: "请保持人脸在框内"    
-102: "检测到多张人脸"   
-103: "人脸检测失败"   
-104: "人脸检测不完整"   
-105: "请勿遮挡眼睛"    
-106: "请勿遮挡嘴巴"     
-107: "请勿遮挡鼻子"     
-201: "人脸比对相似度低"    
-202: "人脸比对失败"    
-301: "意愿核验不通过"   
-800: "前端不兼容错误"    
-801: "用户未授权摄像头和麦克风权限"   
-802: "核验流程异常中断，请勿切屏或进行其他操作"   
-803: "用户主动关闭链接/异常断开链接"   
-804: "用户当前网络不稳定，请重试"  
-998: "系统数据异常"   
-999: "系统未知错误，请联系人工核实"   
若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalResultDetailCode 意愿核身错误码：
0: "成功"       
-1: "参数错误"    
-2: "系统异常"    
-101: "请保持人脸在框内"    
-102: "检测到多张人脸"   
-103: "人脸检测失败"   
-104: "人脸检测不完整"   
-105: "请勿遮挡眼睛"    
-106: "请勿遮挡嘴巴"     
-107: "请勿遮挡鼻子"     
-201: "人脸比对相似度低"    
-202: "人脸比对失败"    
-301: "意愿核验不通过"   
-800: "前端不兼容错误"    
-801: "用户未授权摄像头和麦克风权限"   
-802: "核验流程异常中断，请勿切屏或进行其他操作"   
-803: "用户主动关闭链接/异常断开链接"   
-804: "用户当前网络不稳定，请重试"  
-998: "系统数据异常"   
-999: "系统未知错误，请联系人工核实"   
若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFinalResultDetailCode() const;

                    /**
                     * 设置意愿核身错误码：
0: "成功"       
-1: "参数错误"    
-2: "系统异常"    
-101: "请保持人脸在框内"    
-102: "检测到多张人脸"   
-103: "人脸检测失败"   
-104: "人脸检测不完整"   
-105: "请勿遮挡眼睛"    
-106: "请勿遮挡嘴巴"     
-107: "请勿遮挡鼻子"     
-201: "人脸比对相似度低"    
-202: "人脸比对失败"    
-301: "意愿核验不通过"   
-800: "前端不兼容错误"    
-801: "用户未授权摄像头和麦克风权限"   
-802: "核验流程异常中断，请勿切屏或进行其他操作"   
-803: "用户主动关闭链接/异常断开链接"   
-804: "用户当前网络不稳定，请重试"  
-998: "系统数据异常"   
-999: "系统未知错误，请联系人工核实"   
若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalResultDetailCode 意愿核身错误码：
0: "成功"       
-1: "参数错误"    
-2: "系统异常"    
-101: "请保持人脸在框内"    
-102: "检测到多张人脸"   
-103: "人脸检测失败"   
-104: "人脸检测不完整"   
-105: "请勿遮挡眼睛"    
-106: "请勿遮挡嘴巴"     
-107: "请勿遮挡鼻子"     
-201: "人脸比对相似度低"    
-202: "人脸比对失败"    
-301: "意愿核验不通过"   
-800: "前端不兼容错误"    
-801: "用户未授权摄像头和麦克风权限"   
-802: "核验流程异常中断，请勿切屏或进行其他操作"   
-803: "用户主动关闭链接/异常断开链接"   
-804: "用户当前网络不稳定，请重试"  
-998: "系统数据异常"   
-999: "系统未知错误，请联系人工核实"   
若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalResultDetailCode(const int64_t& _finalResultDetailCode);

                    /**
                     * 判断参数 FinalResultDetailCode 是否已赋值
                     * @return FinalResultDetailCode 是否已赋值
                     * 
                     */
                    bool FinalResultDetailCodeHasBeenSet() const;

                    /**
                     * 获取意愿核身错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalResultMessage 意愿核身错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinalResultMessage() const;

                    /**
                     * 设置意愿核身错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalResultMessage 意愿核身错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalResultMessage(const std::string& _finalResultMessage);

                    /**
                     * 判断参数 FinalResultMessage 是否已赋值
                     * @return FinalResultMessage 是否已赋值
                     * 
                     */
                    bool FinalResultMessageHasBeenSet() const;

                    /**
                     * 获取意愿核身结果详细数据，与每段点头确认过程一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details 意愿核身结果详细数据，与每段点头确认过程一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntentionActionResultDetail> GetDetails() const;

                    /**
                     * 设置意愿核身结果详细数据，与每段点头确认过程一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _details 意愿核身结果详细数据，与每段点头确认过程一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetails(const std::vector<IntentionActionResultDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 意愿核身错误码：
0: "成功"       
-1: "参数错误"    
-2: "系统异常"    
-101: "请保持人脸在框内"    
-102: "检测到多张人脸"   
-103: "人脸检测失败"   
-104: "人脸检测不完整"   
-105: "请勿遮挡眼睛"    
-106: "请勿遮挡嘴巴"     
-107: "请勿遮挡鼻子"     
-201: "人脸比对相似度低"    
-202: "人脸比对失败"    
-301: "意愿核验不通过"   
-800: "前端不兼容错误"    
-801: "用户未授权摄像头和麦克风权限"   
-802: "核验流程异常中断，请勿切屏或进行其他操作"   
-803: "用户主动关闭链接/异常断开链接"   
-804: "用户当前网络不稳定，请重试"  
-998: "系统数据异常"   
-999: "系统未知错误，请联系人工核实"   
若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_finalResultDetailCode;
                    bool m_finalResultDetailCodeHasBeenSet;

                    /**
                     * 意愿核身错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalResultMessage;
                    bool m_finalResultMessageHasBeenSet;

                    /**
                     * 意愿核身结果详细数据，与每段点头确认过程一一对应
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntentionActionResultDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONACTIONRESULT_H_
